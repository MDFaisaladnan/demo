#include<stdio.h>
int main()
{
    int n,i,j,sum;
    printf("Enter the number of values in array:");
    scanf("%d",&n);
    printf("Enter the sum:");
    scanf("%d",&sum);
    int arr1[n];
    int arr2[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value to be inserted in 1st array:");
        scanf("%d",&arr1[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("Enter value to be inserted in 2nd array:");
        scanf("%d",&arr2[i]);

    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            int z=arr1[i]+arr2[j];
            if(z==sum)
            {
                printf("The required elements are %d,%d",arr1[i],arr2[j]);
            }
            
        }
    }

    return 0;
}