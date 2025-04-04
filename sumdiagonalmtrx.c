#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the elements of the matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //calculating the sum of the diagonal elements
    for(i=0;i<3;i++)
    {
        sum=sum+a[i][i];
    } 
    printf("The sum of the diagonal elements is %d",sum);
    return 0;
}
 
