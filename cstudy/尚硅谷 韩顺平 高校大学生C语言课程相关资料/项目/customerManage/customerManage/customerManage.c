#include <stdio.h>
#include <string.h>

struct Customer {
	int id;
	int age;
	char name[10];
	char gender;
	char  phone[10];
	char  email[10];
};
char key ;
char loop=1;
int customerNum=1;


//客户结构体数组
struct Customer customers[20];

//得到一个客户的信息
void getInfo(struct Customer *customer) {
	
	/*sprintf(info, "\n%d\t%s\t%c\t%d\t%s\t%s", (*customer).id, (*customer).name, 
		(*customer).gender, (*customer).age, (*customer).phone,(*customer).email);*/
	printf("\n%d\t%s\t%c\t%d\t%s\t%s", (*customer).id, (*customer).name, 
		(*customer).gender, (*customer).age, (*customer).phone,(*customer).email);
}

//提供各种操作


//1. 添加
void add(){
	//编号自动增长
	customers[customerNum].id = customerNum + 1;
	printf("\n---------------------添加客户---------------------");
	printf("\n姓名：");
	scanf("%s", customers[customerNum].name);
	getchar();
	printf("\n性别：");
	scanf("%c", &(customers[customerNum].gender));
	getchar();
	printf("\n年龄：");
	scanf("%d", &(customers[customerNum].age));
	getchar();
	printf("\n电话：");
	scanf("%s", customers[customerNum].phone);
	getchar();
	printf("\n邮箱：");
	scanf("%s",customers[customerNum].email);
	getchar();
	printf("\n---------------------添加完成---------------------");
	customerNum++;
	
}

//根据输入的id去找对应的下标，如果找不到返回-1
int findIndex(int id){
	int index = -1;
	int i;
	for (i = 0; i < customerNum ; i++) {
		if (customers[i].id == id) {
			index = i;
			break;
		}
	}
	return index;
}

//2. 删除客户
int del(int id){
	//找到id对应的元素下标
	int index = findIndex(id);
	int i;
	if (index == -1) {
		return 0;//说明这个客户不存在..
	}else {
		//找到,就从index+1开始整体前移
		for (i = index + 1; i < customerNum; i++) {
			customers[i - 1] = customers[i];
		}
		--customerNum;
		return 1;
	}
}

//显示部分

//1. 显示所有
void showList(){
	int i = 0;
	printf("\n---------------------------客户列表---------------------------");
	printf("\n编号\t姓名\t性别\t年龄\t电话\t邮箱");
	for (i = 0; i < customerNum; i++) {
		getInfo(&customers[i]);
	}
}

//2. 完成删除 界面
//---------------------删除客户---------------------
//请选择待删除客户编号(-1退出)：1
//确认是否删除(Y/N)：y
//---------------------删除完成---------------------

void delView(){
	int id;
	char choice = ' ';
	printf("\n---------------------删除客户---------------------");
	printf("\n请选择待删除客户编号(-1退出)：");
	scanf("%d", &id);
	getchar();
	if (id == -1) {
		printf("\n---------------------删除没有完成---------------------");
		return;
	}

	printf("确认是否删除(Y/N)：");
	scanf("%c", &choice);
	getchar();
	if (choice == 'Y') {
		if(del(id)){
			printf("\n---------------------删除完成---------------------");
		}else{
			printf("\n---------------------删除没有完成，无此id---------------------");
		}
	} 
}


//3. 主菜单
void mainMenu() {
	do {
		printf("\n-----------------客户信息管理软件-----------------");
		printf("\n                 1 添 加 客 户");
		printf("\n                 2 修 改 客 户");
		printf("\n                 3 删 除 客 户");
		printf("\n                 4 客 户 列 表");
		printf("\n                 5 退          出");
		printf("\n请选择(1-5):");
		scanf("%c", &key);
		getchar();

		switch (key) {
		case '1':
			add();
			break;
		case '2':
			break;
		case '3':
			delView();
			break;
		case '4':
			showList();
			break;
		case '5':
			loop = 0;
			break;
		default:
			printf("\n输入错误，请重新输入");
			break;
		}

	} while (loop);

	printf("\n你已经成功的退出了系统....");
	getchar();
}


void main() {
	////为了测试方便
	customers[0].id = 1;
	customers[0].age = 10;
	strcpy(customers[0].email , "xx@sohu.com");
	customers[0].gender = 'f';
	strcpy(customers[0].name , "zs");
	strcpy(customers[0].phone , "110");

	mainMenu();

	return ;
}

