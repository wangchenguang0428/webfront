package shujujiegouyusuanfafenxi.chapter2;

/**
 * @author wcg
 * @CreateDate 2021/2/12-15:00
 */
public class Question2_17 {


    public static void main(String[] args) {
        int[] arr = {-1,2,3,-3};
        System.out.println(PositronSequenceSum(arr));
        System.out.println(maxSequenceProduct(arr));

    }


    /**
     *
     * 求取最大连续正子序列和
     *
     * @param arr
     * @return
     */
    public static int PositronSequenceSum(int [] arr){
        int min = Integer.MAX_VALUE;

        for(int i=0;i<arr.length;i++){
            int thisSum = 0;
            for(int j=i;j<arr.length;j++){
                thisSum += arr[j];
                if(thisSum<min && thisSum>0){
                    min = thisSum;
                }
            }
        }
        return min;


    }

    /**
     * 动态规划求取连续最大乘积
     *
     *
     * @param arr
     * @return
     */

    public static int maxSequenceProduct(int[] arr){
        int result = arr[0];

        int dpMin;
        int dpMax;

        int preMin = arr[0];
        int preMax = arr[0];

        for(int i=1;i<arr.length;i++){
            /**
             * 因为是乘法 所以存在正数负数的情况
             */
            dpMax = Math.max(result,Math.max(preMin*arr[i],preMax*arr[i]));
            dpMin = Math.min(result,Math.min(preMin*arr[i],preMax*arr[i]));
            result = Math.max(dpMax,result);
            preMax = dpMax;
            preMin = dpMin;
        }
        return result;
    }



}
