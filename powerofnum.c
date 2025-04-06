#include<stdio.h>
int main()
{
int base,power,result = 1,i;
printf("enter the base =");
scanf("%d",&base);
printf("enter the power =");
scanf("%d",&power);
for(i=0;i<=power;i++)
{
	result =   result * base;
}

printf("the power is %d",result);
return 0;
}
