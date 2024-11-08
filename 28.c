#include<stdio.h>
int main()
{
    int i,j,row=2,column=2;
    int mat1[row][column],mat2[row][column],mat3[row][column];
    printf("enter matrix mat1(%dx%d)row-wise: \n",row,column);
    for(i=0;i<row;i++)
    for(j=0;j<column;j++)
    scanf("%d",&mat1[i][j]);

    printf("enter matrix mat2(%dx%d)row-wise: \n",row,column);
    for(i=0;i<row;i++)
    for(j=0;j<column;j++)
    scanf("%d",&mat2[i][j]);
    for(i=0;i<row;i++)
    for(j=0;j<column;j++)
    {mat3[i][j]=mat1[i][j] + mat2[i][j];}
    printf("The Resultant Matrix is mat3 is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        printf("%5d",mat3[i][j]);
        printf("\n");
    }

    return 0;
}
