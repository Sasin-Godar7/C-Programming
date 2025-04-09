#include<stdio.h>
void merge(int a[],int b[],int n,int j,int i);
int main()
{
    int a[5],b[5],i,j,n=5;
    printf("Enter the no of the elements in the array:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    merge(a,b,n,j,i);
return 0;
}
void merge(int a[],int b[],int n,int j,int i)
{
    int m=3;
    for(i=0;i<m;i++)
    {
        printf("%d",&a[i]);
        b[j]=a[i];
        j++;
    }
    n=n+1;
    printf("The merged array is");
    for(j=0;j<n;j++)
    {
        printf("%d",b[j]);
    }
} 