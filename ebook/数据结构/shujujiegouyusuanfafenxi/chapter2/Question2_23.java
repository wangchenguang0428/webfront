package shujujiegouyusuanfafenxi.chapter2;

/**
 * @author wcg
 * @CreateDate 2021/2/13-15:28
 */
public class Question2_23 {

    public static void main(String[] args) {
        System.out.println(pow(1.0,3));
    }


    /**
     * 快速求幂
     *
     *
     */
    public static double pow(double d, int n){
            double ind = d;
            double res = 1;
            while (n!=0){
                if((n&1)==1){
                    res = res*ind;
                }

                n >>=1;
                ind = ind*ind;
            }
            return res;
    }

}
