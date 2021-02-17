package shujujiegouyusuanfafenxi.chapter2;

/**
 * @author wcg
 * @CreateDate 2021/2/15-17:31
 */
public class Question2_28 {


    public static void main(String[] args) {
        int[] arr = new int[]{5,4,3,2,1};
        System.out.println(findMaxSub(arr));

    }



    private static int findMaxSub(int[] arr) {
        int sub = 0;
        int len = arr.length;
        for (int i = 0; i < len - 1; i++) {
            for (int j = i+1; j < len; j++) {
                if(arr[j]-arr[i]>sub)
                    sub = arr[j] - arr[i];
            }
        }
        return sub;
    }

    private static int findMin(int[] arr) {
        int minSu = 0;
        int min = arr[0];
        int len = arr.length;
        for (int i = 0; i < len; i++) {
            if (arr[i] < min) {
                min = arr[i];
                continue;
            }
            if (arr[i] - min > minSu) {
                minSu = arr[i] - min;
            }
        }
        return minSu;
    }
}
