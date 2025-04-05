#include<stdio.h>
int product(int , int);
void main ()
{
	int num,a,b,result;
	printf("enter 1st number =");
	scanf("%d",&a);
	printf("enter 2nd number =");
	scanf("%d",&b);                   
	result = product (a,b);
	                             // 2*4=8    2+ 2+ 2+ 2 = 8 
	
	printf("product is %d",result);
}
int product(int a, int b)
{
	if(a == 0 || b==0 )
	return 0;
	else 
	return a + product(a,b-1);
}
