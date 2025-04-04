#include<stdio.h>
int main()
{
	int key,n,i,arr[10];
	printf("enter the number =\n");
	scanf("%d",&n);
	printf("enter the key element =\n");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
		printf("enter the %delement",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(key == arr[i])
		printf("key found at index no %d",i);
		else
		{
	
	if(key == n)
	{
		printf("key not found !!");
	}
}
}
return 0;	
}
