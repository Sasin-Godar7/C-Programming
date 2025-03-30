#include<stdio.h>
int main()
{
int rem , num , sum=0;
printf("enter any number =");
scanf("%d",&num);
while(num !=0)
{
	rem = num%10;
	sum = sum + rem * rem;
	num /=10;
	
		
	}
	printf("sum of square of number is %d",sum);
	return 0;
}
