#include<stdio.h>
int main()
{
	int x,n,i,p,sum = 0,j;
	printf("enter value of x =");
	scanf("%d",&x);
	printf("enter the value of numbre =");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		p=1;
		for(j=1;j<=i;j++)
		{
			p = p* x;
			
		}
		if(i % 2 == 0)
		{
			sum = sum -p;
		}
		else
		{
			sum = sum + p;
		}
	}
	printf("sum is %d",sum);
	return 0;
}
