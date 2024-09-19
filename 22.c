#include<stdio.h>
int sum(int x,int y);
main()
{
    int a,b,s;
    printf("enter values of a and b :");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("the sum of %d and %d is %d\n",a,b,s);
    
}
int sum(int x,int y)
{
    int s;
    s=x+y;
    return s;
}