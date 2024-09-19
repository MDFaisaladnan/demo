# include<stdio.h>
# include<math.h>
int kprime(int a)
{
    int i,flag=1;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            flag=0;
            printf("NOT prime");
            break;
        }
    }
    if(flag==1)
    {
        printf("The number is prime");
    }
}
void main()
{
    int n,r;
    printf("enter a number :");
    scanf("%d",&n);
    kprime(n);
}