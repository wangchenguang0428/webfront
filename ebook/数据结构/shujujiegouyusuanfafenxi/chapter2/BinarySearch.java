package shujujiegouyusuanfafenxi.chapter2;

import java.lang.reflect.WildcardType;
import java.util.Comparator;

/**
 * @author wcg
 * @CreateDate 2021/2/15-18:12
 */
public class BinarySearch {


    public static void main(String[] args) {
        Integer[] a = new Integer[]{1,2,3};

        System.out.println(binarySearch(a,3));
    }


    public static <AnyType extends Comparable<? super AnyType>> int binarySearch(AnyType[] a, AnyType x){

        int low =  0;
        int high = a.length-1;

        while (low<=high){
            int mid = (low+high)/2;

            if(a[mid].compareTo(x)<0){
                low = mid+1;
            }else if(a[mid].compareTo(x)>0){
                high = mid-1;
            }else{
                return mid;
            }
        }
        return -1;
    }
}
