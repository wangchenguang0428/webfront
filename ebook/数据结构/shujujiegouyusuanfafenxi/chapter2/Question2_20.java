package shujujiegouyusuanfafenxi.chapter2;

/**
 * @author wcg
 * @CreateDate 2021/2/12-21:37
 */
public class Question2_20 {


    public static void main(String[] args) {
        System.out.println(countPrimes(25));
    }

    /**
     *
     *
     * @param n
     * @return
     */
    public static boolean isPrime(int n){
        if(n<=3){
            return n>1;
        }

        for(int i=2;i<n;i++){
            if((n&i)==0)
                return false;
        }
        return true;

    }

    /**
     *
     * num =√n*√n。 如果n除以大于√n的数，必得到小于√n的商，而小于√n的整数已经在2到√n的整数试过了，
     * 没有必要再试（√n, n）范围内的数了，再去掉偶数的情况，除2外的偶数都不是质数
     *
     * @param n
     * @return
     */
    public static boolean isPrime1(int n){
        if(n==2)
            return true;
        if(n%2==1){
            for(int i=2;i<=Math.sqrt(n);i++){
                if(n%i==0)
                    return false;
            }
            return true;
        }else {
            return false;
        }
    }

    /**
     * 厄拉多斯筛
     *
     *
     */
    public static int countPrimes(int n){
        if(n<=2)
            return 0;
        boolean [] nums = new boolean[n]; //如果改成int类型 效率会降很多

        for (int i=2;i<Math.sqrt(n);i++){
            if(!nums[i]){
                for(int j=i*i;j<n;j=j+i){
                    nums[j] = true;
                }
            }
        }
        int cnt = 0;
        for(int i=2;i<n;i++){
            if(!nums[i])
                cnt++;
        }
        return cnt;
    }








}
