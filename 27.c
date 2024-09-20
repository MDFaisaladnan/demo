#include<stdio.h>
int rev(int n)
{
    int r=0,i;
    if (n<10)
    return n;
    else
    {
        r=n%10;
        for (i=n;i>=10;i=i/10)
        r=r*10;
        return (r+rev(n/10));

    }

}
int main()
{
    int n1,n2;
    printf("Enter a number:");
    scanf("%d",&n1);
    n2=n1;
    int r2=rev(n1);
    printf("The reversed number is %d",r2);


}
 