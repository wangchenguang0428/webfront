#include < conio.h >
#include < stdio.h >
int fun(int *x,int y)
{ int t;
t=*x;*x=y;
return(t);
}
main()
{int a=3,b=8;
printf("%d %d\n ",a,b);
b=fun(&a,b);
printf("%d %d\n ",a,b);
getchar();
}