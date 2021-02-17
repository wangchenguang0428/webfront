package shujujiegouyusuanfafenxi.chapter3;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 * @author wcg
 * @CreateDate 2021/2/16-16:35
 */
public class Question3_1 {


    public static void main(String[] args) {
        List<Integer> l = new ArrayList();
        List<Integer> p = new ArrayList();
        l.add(11);
        l.add(22);
        l.add(33);
        l.add(44);
        l.add(55);
        l.add(66);
        l.add(77);
        l.add(88);
        l.add(99);
        l.add(100);
        p.add(1);
        p.add(2);
        p.add(4);
        p.add(6);
        long startTime = System.currentTimeMillis();
        printLots(l, p);
        long endTime = System.currentTimeMillis();    //获取结束时间
        System.out.println("程序运行时间：" + (endTime - startTime) + "ms");    //输出程序运行时间
        startTime = System.currentTimeMillis();
        printlots2(l, p);
        endTime = System.currentTimeMillis();    //获取结束时间
        System.out.println("程序运行时间：" + (endTime - startTime) + "ms");    //输出程序运行时间
    }


    /**
     *
     * 运行时间为 O(N*N)
     *
     */
    public static void printLots(List<Integer> L,List<Integer> P){

        Iterator<Integer> iterL = L.iterator();
        Iterator<Integer> iterP = P.iterator();
        Integer itemL = null;
        Integer itemP = 0;
        int start = 0;

        while (iterL.hasNext() && iterP.hasNext()){
            itemP = iterP.next();
            System.out.println("Looking for the position "+itemP);
            while (start<itemP && iterL.hasNext()){
                start++;
                itemL = iterL.next();
            }

            System.out.println(itemL);

        }


    }


    public static void printlots2(List<Integer> L,List<Integer> P){
        Iterator<Integer> iterL = L.iterator();
        Iterator<Integer> iterP = P.iterator();
        Integer itemL = iterL.next();
        Integer itemP = iterP.next();
        int index = 1;
        while (itemL!=null && itemP!=null){
            if(index++==itemP){
                System.out.println(itemL);
                if(iterP.hasNext()){
                    itemP = iterP.next();
                }else{
                    break;
                }

            }
            itemL = iterL.next();

        }



    }

}
