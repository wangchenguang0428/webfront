package shujujiegouyusuanfafenxi.chapter3;

import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;

/**
 * @author wcg
 * @CreateDate 2021/2/17-17:51
 */
public class Question3_6 {
    public static void main(String[] args) {

//        pass2(2,5);
        pass3(1,5);

//        kill(5,2);
    }


    /**
     *
     * 约瑟夫环问题
     *
     *
     */
    public static void pass2(int m,int n){
        int index = 0;
        int step = 1;
        int count = 0;
        int size = n;


        int[] people = new int[size];

        int[] outs = new int[size];

        int[] flag = new int[size];

        while (count<size){
            if (step==m){
                outs[count] = index+1;
                count++;
                step = 0;
                people[index] = 1;
            }

            index = (++index)%size;

            if(people[index] == 0){
                step++;
            }



        }

        for(int c=0;c<n;c++){
            System.out.printf("%d\t",outs[c]);
        }



    }

    public static void pass4(int m, int n){
        int[] num = new int[n];
        int left = n;  //剩下的人数
        int index = 0; //当前遍历到的位置
        while(left != 1){
            for(int i = 0; i< m; i++){
                if(num[index++] != 0)   //如果当前人已经清除
                    i--;
                if(index >= n)
                    index = 0;
            }
            while(num[index] != 0){
                index++;
                if(index >= n)
                    index = 0;
            }
            System.out.println("out number is " + (index + 1));
            num[index] = -1;    //将清除的数据下标置-1
            index++;
            if(index >= n)
                index = 0;
            left--;
        }
    }



    public static void pass(int m, int n)
    {
        int i, j, mPrime, numLeft;
        ArrayList<Integer> L = new ArrayList<Integer>();
        for (i=1; i<=n; i++)
            L.add(i);
        ListIterator<Integer> iter = L.listIterator();
        Integer item=0;
        numLeft = n;
        mPrime = m % n;
        for (i=0; i<n; i++)
        {
            mPrime = m % numLeft;
            if (mPrime <= numLeft/2)
            {
                if (iter.hasNext())
                    item = iter.next();  //如果迭代器的下表没有走到最后下次来就不变
                for (j=0; j<mPrime; j++)
                {
                    if (!iter.hasNext())
                        iter = L.listIterator();
                    item = iter.next();
                }
            }
            else
            {
                for (j=0; j<numLeft-mPrime; j++)
                {
                    if (!iter.hasPrevious())
                        iter = L.listIterator(L.size());
                    item = iter.previous();
                }
            }
            System.out.print("Removed " + item + " ");
            iter.remove();
            if (!iter.hasNext())
                iter = L.listIterator();
            System.out.println();
            for (Integer x:L)
                System.out.print(x + " ");
            System.out.println();
            numLeft--;
        }
        System.out.println();
    }



    public static void pass3(int m, int n){
        ArrayList<Integer> list = new ArrayList<Integer>();
        for(int i = 1; i <= n; i++)
            list.add(i);
        ListIterator<Integer> iter = list.listIterator();
        int left = n;    //剩下的人数
        int item = 0;    //the out number
        for(int i= 1; i < n; i++){
            int mPrime = m % left;
            if(mPrime < left/2){     //如果当前的偏移量小于list长度的一半时
                if(iter.hasNext())
                    item = iter.next();
                for(int j = 0; j < mPrime; j++){
                    if(!iter.hasNext())
                        iter= list.listIterator();
                    item = iter.next();
                }
            }
            else{  //当偏移量大于list长度的一半时，从后往前找
                for(int j = 0; j< left - mPrime; j++){
                    if(!iter.hasPrevious())
                        iter = list.listIterator(list.size());
                    item = iter.previous();
                }
            }
            System.out.println("out number is " + item);
            iter.remove();
            if(!iter.hasNext())    //有可能下一次循环mPrime就会小于left的一半
                iter = list.listIterator();
            left--;
        }
    }


    /**
     * @param nums  人数
     * @param length 步长
     */
    public static void kill(int nums,int length){

        List<Integer> list = new ArrayList<>();

        //初始化list
        for(int i = 0 ; i < nums ; i++ ){
            list.add(i+1);
        }

        //打印囚犯
        System.out.println( list.toString() );

        //记录被杀的下标(需要求余-1)
        int indexKill = 0;

        //开始杀人
        while( list.size() > 1 ){
            indexKill += length;
            //得到被杀的下标
            indexKill = ( indexKill % list.size() ) - 1;

            //如果是被杀下标==list.size(),需要 特殊处理
            if( indexKill == -1 ){
                System.out.println( "把" + list.get( list.size() - 1 ) + "杀掉" );
                list.remove( list.size() - 1 );
                indexKill = 0;
            }else{
                System.out.println( "把" + list.get( indexKill ) + "杀掉" );
                list.remove( indexKill );
            }
        }

        System.out.println( "释放" + list.get(0) );
    }



}
