#include<stdio.h>
int main()
{
	int a[10],odd[10],even[10];
	int i,j,k,n;
	printf("enter how many number :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element%d",i+1);
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		if(a[i] % 2 == 0)
		{
			even[j] = a[i];
			j++ ;
		}
		else (a[i]!= 0);
		{
			odd[k] = a[i];
			k++ ;
		}
	}
	printf("\n");
	for(j=0;j<i;j++)
	{
	
	printf(" even elements are %d \t ",even[j]);
}
	printf("\n");
	for(k=0;k<i;k++)
	{
	
	printf("odd eleemnt is %d\t",odd[k]);
	
	}
	return 0;
}
