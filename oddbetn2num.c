#include<stdio.h>
int main()
{
	int x,y,sum=0,i;
	printf("enter the value of first number =");
	scanf("%d",&x);
		printf("enter the value of second number =");
	scanf("%d",&y);
	for(x=0;x<=y;x++)
	{
		if(x%2 !=0)
		{
			sum = sum + x;
		}
	}
	printf("sum of odd number is %d",sum);
	return 0;
}
