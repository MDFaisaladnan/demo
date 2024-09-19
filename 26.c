#include<stdio.h>
void kswap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swappin the number\n");
    printf("1st number is %d\n",a);
    printf("2nd number is %d\n",b);
}
void main()
{
    int n1,n2;
    printf("enter the 1st number :");
    scanf("%d",&n1);
    printf("enter the 2nd number :");
    scanf("%d",&n2);
    kswap(n1,n2);
}