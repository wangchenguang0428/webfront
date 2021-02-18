# Collecting Metrics with the PostgreSQL and TimescaleDB Output Plugin for Telegraf

Telegraf can collect metrics from a wide array of inputs and write them to a wide array of outputs.
It is plugin-driven for both collection and output of data so it is easily extendable.
It is written in Go, which means that it is compiled and standalone binary that can be executed on any system with no need for external dependencies, or package management tools required.

Telegraf is an open-source tool. It contains over 200 plugins for gathering and writing different types of data written by people who work with that data.

We wrote the PostgreSQL output plugin which also has the ability to send data to a TimescaleDB hypertable. The [pull request][pull-request] is open and currently under review by the Telegraf developers, waiting to be merged. To give developers the opportunity to try this functionality, we built downloadable binaries of Telegraf with our plugin already included.

This tutorial will run through a couple of examples on how to use the PostgreSQL/TimescaleDB output plugin for Telegraf.

## Installation [](telegraf-installation)

### Before we start

Before we start, you will need [TimescaleDB installed][getting-started] and a means to connect to it.

### Setting up Telegraf

Telegraf is written in Go, and the current build process of the tool is configured to produce one standalone binary. Because of this all the code for the different plugins must be part of that binary. We have an unofficial build of Telegraf version 1.13.0 with our plugin added. You can download from the following links:

* Linux amd64: [:DOWNLOAD_LINK: `deb`][deb-build] [:DOWNLOAD_LINK: `rpm`][rpm-build] [:DOWNLOAD_LINK: `binary`][linux-bin-build]
* Windows amd64 [:DOWNLOAD_LINK: `binary/exe`][windows-build]
* MacOS amd64 [:DOWNLOAD_LINK: `binary`][mac-build]

We can also provide you with builds for:

* Windows i386
* Linux (i386, armhf, armel, arm64, static_amd64, s390x, mipsel)
* FreeBSD (amd64, i386)

if you contact us in our [community slack][public-slack]

Once you download the binary and extract it to a suitable location (or install the packages) we can test out the build.
You may have to make the file executable by running `chmod +x telegraf`.
We can check the version of the installed Telegraf with

```
$ telegraf --version
```

If the installation was successful it should print out `Telegraf 1.13.0-with-pg`.

## Telegraf Configuration [](telegraf-configuration)

When Telegraf is started, a config file needs to be specified.
The config file contains the setup for the:
* Telegraf agent
  * Collection interval
  * Jitter
  * Buffer and batch size and so on
* Global tags added to all collected metrics from all inputs
* Enabled outputs, processors, aggregators, inputs (and their respective configuration)

A sample config file with PostgreSQL included as a plugin can be generated by executing

```
$ telegraf --input-filter=cpu --output-filter=postgresql config > telegraf.conf
```

The above command generates a config file that enables the CPU input plugin (which samples various metrics about CPU usage) and the PostgreSQL output plugin.  
The config file also includes all available input, output, processor, and aggregator plugins, **but commented out**. So, it's easy to see how a plugin should be configured.

### Testing out the config file

To test our configuration, we can output a single collection to STDOUT. By running

```
$ telegraf --config telegraf.conf --test
```

we select the generated config file that enables only the CPU input plugin.
And the output should look something like:

```
> cpu,cpu=cpu0,host=local usage_guest=0,usage_idle=78.431372,usage_iowait=0,usage_irq=0,usage_softirq=0,usage_steal=0,usage_system=11.764705,usage_user=9.803921 1558613882000000000
> cpu,cpu=cpu1,host=local usage_guest=0,usage_idle=92.156862,usage_iowait=0,usage_irq=0,usage_softirq=0,usage_steal=0,usage_system=3.921568,usage_user=3.921568 1558613882000000000
> cpu,cpu=cpu-total,host=local usage_guest=0,usage_idle=87.623762,usage_iowait=0,usage_irq=0,usage_softirq=0,usage_steal=0,usage_system=6.435643,usage_user=5.940594 1558613882000000000
```

A line is outputted for each core of the CPU and the total. Values are presented in `key=value` pairs with the timestamp last in the row.
When writing to STDOUT you can distinguish between *tags*, which are indexed fields (`cpu`, `host`) and value *fields* (`usage_quest`, `usage_user` ...) by a blank space (in our example the space after `host=local`).
The distinction exists because different configuration options are available for the different fields.

### Configuring the PostgreSQL Output Plugin

The `telegraf.conf` file we generated has a section (around line 80) headed with

```
################################################
#                OUTPUT PLUGINS                #
################################################
```

And below this header, the default configuration for the PostgreSQL output plugin is
laid out.

```
[[outputs.postgresql]]
  ## specify address via a url matching:
  ##   postgres://[pqgotest[:password]]@localhost[/dbname]\
  ##       ?sslmode=[disable|verify-ca|verify-full]
  ## or a simple string:
  ##   host=localhost user=pqotest password=... sslmode=... dbname=app_production
  ##
  ## All connection parameters are optional. Also supported are PG environment vars
  ## e.g. PGPASSWORD, PGHOST, PGUSER, PGDATABASE
  ## all supported vars here: https://www.postgresql.org/docs/current/libpq-envars.html
  ##
  ## Without the dbname parameter, the driver will default to a database
  ## with the same name as the user. This dbname is just for instantiating a
  ## connection with the server and doesn't restrict the databases we are trying
  ## to grab metrics for.
  ##
  connection = "host=localhost user=postgres sslmode=verify-full"

  ## Store tags as foreign keys in the metrics table. Default is false.
  # tags_as_foreignkeys = false

  ## Template to use for generating tables
  ## Available Variables:
  ##   {TABLE} - tablename as identifier
  ##   {TABLELITERAL} - tablename as string literal
  ##   {COLUMNS} - column definitions
  ##   {KEY_COLUMNS} - comma-separated list of key columns (time + tags)
  ## Default template
  # table_template = "CREATE TABLE IF NOT EXISTS {TABLE}({COLUMNS})"
  ## Example for timescaledb
  # table_template = "CREATE TABLE {TABLE}({COLUMNS}); SELECT create_hypertable({TABLELITERAL},'time');"

  ## Schema to create the tables into
  # schema = "public"

  ## Use jsonb datatype for tags
  # tags_as_jsonb = false
  ## Use jsonb datatype for fields
  # fields_as_jsonb = false
```

From the config we can notice several things:
1. The top line enables the plugin, the plugin specific config is indented after this line
2. There is currently only one parameter configured, `connection`. The others are commented out
3. Possible parameters are commented out with a single `#`. (`tags_as_foreignkeys`, `table_template`, `schema`, `tags_as_jsonb`, `fields_as_jsonb`)
4. Explanations of the parameters are commented out with a single `##`

The commented out parameters also show their default values.

For the first example we'll set the connection parameter to a proper connection string to establish a connection to an instance of TimescaleDB or PostgreSQL.
All the other parameters will have their default values.

### Creating hypertables

The plugin we developed allows the user to configure several parameters. The `table_template` parameter defines the SQL to be executed when a new measurement is recorded by Telegraf and the
required table doesn't exist in the output database. By default the `table_template` used is `CREATE TABLE IF NOT EXISTS {TABLE}({COLUMNS})` where `{TABLE}` and `{COLUMNS}` are placeholders
for the name of the table and the column definitions.

Let's update `table_template` in the config for TimescaleDB:

```
  table_template=`CREATE TABLE IF NOT EXISTS {TABLE}({COLUMNS}); SELECT create_hypertable({TABLELITERAL},'time',chunk_time_interval := INTERVAL '1 week',if_not_exists := true);`
```

This way when a new table is created it is converted into a hypertable, with each chunk holding 1 week intervals. Nothing else is needed to use the plugin with TimescaleDB.

## Running Telegraf

When we run Telegraf we only need to specify the config file to be used. If we execute

```
$  telegraf --config telegraf.conf
2019-05-23T13:48:09Z I! Starting Telegraf 1.13.0-with-pg
2019-05-23T13:48:09Z I! Loaded inputs: cpu
2019-05-23T13:48:09Z I! Loaded outputs: postgresql
2019-05-23T13:48:09Z I! Tags enabled: host=local
2019-05-23T13:48:09Z I! [agent] Config: Interval:10s, Quiet:false, Hostname:"local", Flush Interval:10s
```

In the output you can notice the loaded inputs (`cpu`) and outputs (`postgresql`) along with the global tags and the intervals with which the agent will collect the data from the inputs, and flush to the outputs. We can stop the execution of Telegraf after ~10-15 seconds.

Let us now connect to our PostgreSQL instance and inspect the data

```
$ psql -U postgres -h localhost
```

The cpu input plugin has one measurement, called cpu, and it's stored in a table of the same name (by default in the public schema).
So with the SQL query `SELECT * FROM cpu`, depending on how long you left Telegraf running you will see the table populated with some values.
We can find the average usage per cpu core with `SELECT cpu, avg(usage_user) FROM cpu GROUP BY cpu`.
The output should look like

```
    cpu    |       avg        
-----------+------------------
 cpu-total | 8.46385703620795
 cpu0      | 12.4343351351033
 cpu1      | 4.88380203380203
 cpu2      | 12.2718724052057
 cpu3      | 4.26716970050303
```

### Adding new Tags or Fields

Your Telegraf configuration can change at any moment.
An input plugin can be reconfigured to produce different data, or you may decide to index your data with different tags.
Our SQL plugin can dynamically update the created tables with new columns as they appear.
The previous configuration we used had no global tags specified other than the `host` tag.
We will now add a new global tag in the configuration.
Open the file in any text editor and update the `[global_tags]` section (around line 18) with:

```
[global_tags]
  location="New York"
```

This way all metrics collected with the instance of Telegraf running with this config will be tagged with `location="New York"`.
If we run Telegraf again, collecting the metrics in TimescaleDB

```
$ telegraf --config telegraf.conf
```

And after a while we check on the `cpu` table in the database

```
psql> \dS cpu
\dS cpu;
Table "public.cpu"
      Column      |           Type           
------------------+--------------------------
 time             | timestamp with time zone
 cpu              | text                     
 host             | text                     
 usage_steal      | double precision         
 usage_iowait     | double precision         
 usage_guest      | double precision         
 usage_idle       | double precision         
 usage_softirq    | double precision         
 usage_system     | double precision         
 usage_user       | double precision         
 usage_irq        | double precision         
 location         | text                     
 ```

 The `location` column was added and it contains "New York" for all rows.

 ### Creating a separate metadata table for tags

 The plugin we developed allows the user to select to have the tag sets inserted in a separate
 table and then referenced via **foreign keys** in the measurement table.
 Having the tags in a separate table saves space for high cardinality tag sets, and allows certain queries to be written more efficiently.
 To enable this change, you need to uncomment the `tags_as_foreignkeys` parameter in the plugin config (around line  103 in `telegraf.conf`) and set it to true

 ```
 ## Store tags as foreign keys in the metrics table. Default is false.
 tags_as_foreignkeys = true
 ```

To better visualize the result we'll drop the existing `cpu` table from our database.

```
psql> DROP TABLE cpu;
```

Now we'll fire Telegraf up again, this time with the config changed to write the tags in a separate table.
```
$ telegraf --config telegraf.conf
```

We can turn it off after 20-30 seconds. If we check on the `cpu` table in the database:

```
psql> \dS cpu
\dS cpu
Table "public.cpu"
      Column      |           Type           
------------------+--------------------------
 time             | timestamp with time zone
 tag_id           | integer                  
 usage_irq        | double precision         
 usage_softirq    | double precision         
 usage_system     | double precision         
 usage_iowait     | double precision         
 usage_guest      | double precision         
 usage_user       | double precision         
 usage_idle       | double precision         
 usage_steal      | double precision         

```
Notice that the `cpu`, `host` and `location` columns are not there, instead there's a `tag_id` column. The tag sets are stored in a separate table called `cpu_tag`:
```
 psql> SELECT * FROM cpu_tag;
 tag_id |  host |    cpu    |  location
--------+-------+-----------+----------
      1 | local | cpu-total | New York
      2 | local | cpu0      | New York
      3 | local | cpu1      | New York
```

 ### JSONB column for Tags and Fields

 Additionally the tags and fields can be stored as JSONB columns in the database. All you need to do is uncomment the `tags_as_jsonb` or `fields_as_jsonb` parameters in `telegraf.conf` (around line 120) and set them to true. In this example we'll store the fields as separate columns, but the tags as JSON.

 ```
 ## Use jsonb datatype for tags
 tags_as_jsonb = true
 ## Use jsonb datatype for fields
 fields_as_jsonb = false
 ```

To better visualize the result we'll drop the existing `cpu_tag` table from our database.
```
psql> DROP TABLE cpu_tag;
```

Fire up Telegraf again, and turn it off after 20-30 seconds. Then we check the `cpu_tag` table:

```
$ telegraf --config telegraf.conf
```

```
 psql> SELECT * FROM cpu_tag;
 tag_id |                                       tags                                        
--------+-----------------------------------------------------------------------------------
      1 | {"cpu": "cpu-total", "host": "local", "location": "New York"}
      2 | {"cpu": "cpu0", "host": "local", "location": "New York"}
      3 | {"cpu": "cpu1", "host": "local", "location": "New York"}
```

And instead of having three text columns, one JSONB column is created.

## Next Steps

Once you have started inserting data in TimescaleDB, you can begin to familiarize yourself with our [architecture][] and [API reference][api].

Additionally, we have several other [tutorials][] available for you to explore as you become accustomed to working with TimescaleDB.


[getting-started]: /getting-started/installation
[tutorials]: /tutorials
[public-slack]: https://slack.timescale.com/
[mac-build]: https://telegrafreleases.blob.core.windows.net/macos/telegraf
[windows-build]: https://telegrafreleases.blob.core.windows.net/windows/telegraf.exe
[deb-build]: https://telegrafreleases.blob.core.windows.net/linux/telegraf_1.13.0~with~pg-1_amd64.deb
[rpm-build]: https://telegrafreleases.blob.core.windows.net/linux/telegraf-1.13.0~with~pg-1.x86_64.rpm
[linux-bin-build]: https://telegrafreleases.blob.core.windows.net/linux/telegraf
[pull-request]: https://github.com/influxdata/telegraf/pull/3428
[architecture]: /introduction/architecture
[api]: /api