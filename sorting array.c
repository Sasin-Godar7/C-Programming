#include<stdio.h>
int main()
{
	int  i,j,temp,arr[10],n;
	printf("enter the numeber =");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("enter the %delement :",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j] >arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
		
	}
	printf("\n displaying in ascending order..");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
