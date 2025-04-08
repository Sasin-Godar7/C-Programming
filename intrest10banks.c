#include<stdio.h>
int main()
{
int i;
float arr[10];
	printf("enetering the intrest rate of 10 banks..\n");
	for(i=0;i<10;i++)
	{
		printf("enter the %d intrest rate",i+1);
		scanf("%f",&arr[i]);
	}
	printf("\n displaying the intrest rate ..");
	for(i=0;i<10;i++)
	{
		printf("%.2f\n",arr[i]);
	}
	return 0;
	
}
