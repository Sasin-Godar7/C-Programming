#include<stdio.h>
int main()
{
int rem , num , sum=0;
printf("enter any number =");
scanf("%d",&num);
while(num !=0)
{
	rem = num%10;
	sum = sum + rem ;
	num /=10;
	
		
	}
	printf("sum of element of number is %d",sum);
	return 0;
}
