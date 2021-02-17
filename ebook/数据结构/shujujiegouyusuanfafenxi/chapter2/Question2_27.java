package shujujiegouyusuanfafenxi.chapter2;

import java.util.Scanner;

/**
 * @author wcg
 * @CreateDate 2021/2/15-16:28
 */
public class Question2_27 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        /*System.out.println("请输入数字N");
        int n=scanner.nextInt();
        int a[][]=new int[n][n];
        System.out.println("请逐行输入数据");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=scanner.nextInt();
            }
        }*/
        int a[][]=new int[][]{
                {1,2,3,4},
                {3,4,5,7},
                {4,5,7,9},
                {6,8,9,22}
        };
        System.out.println("请输入你要查找的元素x");
        int x=scanner.nextInt();
        search(a, x);
    }

    private static void search(int a[][], int k){
        for(int i=0,j=a.length-1;i<a.length&&j>=0;){
            if(a[i][j]==k){
                System.out.println(true);
                return;
            }else if(a[i][j]>k){
                j--;
            }else{
                i++;
            }
        }
        System.out.println(false);

    }
}
