#include<stdio.h>
int main()
{
	int i,j,a[5],b[5];
	for(i=0;i<5;i++)
	{
		printf("enter the elements :",i+1);
		scanf("%d",&a[i]);
	}
	i=0;
	for(j=4;j>=0;j--)
	{
		b[j] = a[i];
		i++ ;
	}
	printf("\n displaying reverses order array..");
		for(i=0;i<5;i++)
	{
	printf("%d\n ",b[i]);
}
return 0;
	
}
