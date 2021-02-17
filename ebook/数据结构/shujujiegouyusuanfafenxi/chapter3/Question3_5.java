package shujujiegouyusuanfafenxi.chapter3;

import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;

/**
 * @author wcg
 * @CreateDate 2021/2/17-10:44
 */
public class Question3_5 {

    public static void main(String[] args) {
        List<Integer> l1 = new ArrayList<>();
        List<Integer> l2 = new ArrayList<>();

        List<Integer> result = new ArrayList<>();

        l1.add(1);
        l1.add(2);
        l1.add(3);

        l2.add(3);
        l2.add(4);
        l2.add(5);
        union(l1,l2,result);

        for(Integer i:result){
            System.out.print(i);
        }
        System.out.println();




    }


    public static <AnyType extends Comparable<? super AnyType>> void union(List<AnyType> L1,
                                                                           List<AnyType> L2, List<AnyType> Result) {
        ListIterator<AnyType> iterL1 = L1.listIterator();
        ListIterator<AnyType> iterL2 = L2.listIterator();
        AnyType itemL1=null, itemL2=null;
// get first item in each list
        if ( iterL1.hasNext() && iterL2.hasNext() )
        {
            itemL1 = iterL1.next();
            itemL2 = iterL2.next();
        }
        while ( itemL1 != null || itemL2 != null )
        {
            int compareResult = itemL1.compareTo(itemL2);
            if ( compareResult == 0 )
            {
                Result.add(itemL1);
                itemL1 = iterL1.hasNext()?iterL1.next():null;
                itemL2 = iterL2.hasNext()?iterL2.next():null;
            }
            else if ( compareResult < 0 )
            {
                Result.add(itemL1);
                itemL1 = iterL1.hasNext()?iterL1.next():null;
            }
            else
            {
                Result.add(itemL2);
                itemL2 = iterL2.hasNext()?iterL2.next():null;
            }
        }
    }
}
