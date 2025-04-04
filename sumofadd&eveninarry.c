#include<stdio.h>
int main()
{
	int sum1=0,sum2=0,arr[10],i,n;
	printf("enter the number =");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d element",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			sum1 = sum1+arr[i];
		}
		else
		{
			sum2 = sum2 + arr[i];
		}
	}
	printf("sum of even no is %d\n",sum1);
	printf("sum of odd number is %d",sum2);
}
