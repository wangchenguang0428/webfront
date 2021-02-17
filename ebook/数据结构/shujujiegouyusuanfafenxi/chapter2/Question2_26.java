package shujujiegouyusuanfafenxi.chapter2;

import java.util.Scanner;

/**
 * @author wcg
 * @CreateDate 2021/2/13-20:29
 */
public class Question2_26 {






    private static int[] a = new int[1000];
    private static int[] b = new int[1000];

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        for(int i=0;i<n;i++){
            a[i] = scanner.nextInt();
        }

        int temp = findMainCell(a,b,n,0);
        if(temp==-1)
            System.out.println("no");
        else
            System.out.println(temp);
    }



    private static boolean isMainCell(int[] a,int n,int probable){

        int cnt = 0;
        for(int i=0;i<n;i++){
            if(a[i]==probable)
                cnt++;
        }
        if(cnt>n/2)
            return true;
        else
            return false;

    }


    private static int findMainCell(int[] a,int[] b,int n,int n2){
        if(n==0)
            return -1;
        if(n==1)
            if(isMainCell(b,n2,a[0]))
                return a[0];
            else
                return -1;

            int cnt=0;
            for(int i=0;i+1<n;i=i+2){
                if(a[i]==a[i+1]){
                    b[cnt++] = a[i];
                }
            }

            int res = findMainCell(b,a,cnt,n);

            if(res==-1 && n%2==1 && isMainCell(a,n,a[n-1]))
                return a[n-1];
            else
                return res;

    }

}
