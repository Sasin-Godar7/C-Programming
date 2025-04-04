#include<stdio.h>
int main()
{
	int i,n,sum=0,arr[5];
	printf("enter the number=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %dnumber ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n displaying the sum");
	for(i=0;i<n;i++)
	{
		sum = sum + arr[i];
	}
	printf("\nthe sum of element is %d",sum);
	return 0;
}
