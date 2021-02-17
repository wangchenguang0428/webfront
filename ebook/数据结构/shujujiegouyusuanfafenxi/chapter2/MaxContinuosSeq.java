package shujujiegouyusuanfafenxi.chapter2;

/**
 * @author wcg
 * @CreateDate 2021/2/15-20:16
 */
public class MaxContinuosSeq {

    public static void main(String[] args) {

        int[] a = new int[]{1,2,3};
        System.out.println(maxSubSum3(a));
    }



    public static int maxSubSum3(int[] a){
        return maxSumRec(a, 0, a.length-1);
    }

    private static int maxSumRec(int[] a,int left,int right){
        if(left==right) //base class
            if(a[left]>0){
                return a[left];
            }else{
                return 0;
            }
        int center=(left+right)/2;

        //左边和右边最大值，递归求解
        int maxLeftSum=maxSumRec(a, left, center-1);
        int maxRightSum=maxSumRec(a, center, right);

        int maxLeftBorderSum=0,leftBorderSum=0;
        //累加求左边界和
        for(int i=center;i>=left;i--)
        {
            leftBorderSum+=a[i];
            if(leftBorderSum>maxLeftBorderSum){
                maxLeftBorderSum=leftBorderSum;
            }
        }
        int maxRightBorderSum=0,rightBorderSum=0;
        //累加求右边界和
        for(int i=center+1;i<=right;i++){
            rightBorderSum+=a[i];
            if(rightBorderSum>maxRightBorderSum){
                maxRightBorderSum=rightBorderSum;
            }
        }

        return max3(maxLeftSum,maxRightSum,maxLeftBorderSum+maxRightBorderSum);
    }

    private static int max3(int a,int b,int c){
        int max;
        max=a>b?a:b;
        max=max>c?max:c;
        return max;
    }
}
