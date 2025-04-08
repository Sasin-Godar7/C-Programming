#include<stdio.h>
int main()
{
	int i,arr[10],largest = 0,n;
	printf("enter the number =\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element %d :",i+1);
		scanf("%d",&arr[i]);
	}
	largest = arr[0];
	for(i=0;i<n;i++)
	{
	    if (arr[0] < arr[i+1])
	    {
	    	largest = arr[i+1];
		}
		
		}
		printf("\n the largest element is %d",largest);
		return 0;
	}
	
