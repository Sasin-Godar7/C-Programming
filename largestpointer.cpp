#include<stdio.h>

int main()
{
	int a[10],i,largest,n;
	int *ptr;
	ptr = a;
	printf("enter nymber :");
	scanf("%d",&n);
	printf("enter the elementj i arry :");

	for (i=0;i<n;i++)
	{
	
	scanf("%d",ptr);
	ptr ++ ;
}
ptr = a;

largest = *ptr ;
for (i=1;i<n;i++)
	{
		          ptr ++ ;   
                     if(largest < *ptr)
                     {
					 
          largest = *ptr;
                    }
}
printf("largwst is %d",largest);
}
