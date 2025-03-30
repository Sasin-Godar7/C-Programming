#include<stdio.h>
void swap(int *a,int *b)
{
	//                             a = 1 b=2 
	int temp;
	   temp = *a;
	   *a=*b;
	   *b=temp;
}

void main()
{
	int num1,num2;
	printf("enter firstnumber :");
	scanf("%d",&num1);
	printf("enter 2nd number :");
	scanf("%d",&num2);
	
	printf("\n");
	printf("befpre swapping num1 = %d and num2 = %d",num1,num2);
	      swap(&num1,&num2);
	      printf("\n");
	      printf("after dwapp9ng num1=%d and num2 = %d",num1,num2);
	      
	      
	      
}
