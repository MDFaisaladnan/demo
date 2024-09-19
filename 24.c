#include<stdio.h>
main()
{
    int n, r;
    printf("enter the fibonacci term serial number : ");
    scanf("%d",&n);
    r=kfib(n);
    printf("the %d term of the fibonacci series is %d",n,r);
}
  int kfib(int a)
 { if(a==1)
 {
    return 1;
 }
 int x=0;
 int y=1;
 int z=0;
 for(int i=2;i<=a;i++)
 {
    z=x+y;
    x=y;
    y=z;
 }
  return z;
} 



