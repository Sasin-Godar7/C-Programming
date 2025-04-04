#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],sum[3][3],i,j;
	printf("entering the element for 1st matrix..");
	for(i=0;i<3;i++)
	{
		printf("\nenter the elements.=");
		scanf("%d",&a[i][j]);
	}
	printf("\n");
		printf("entering the element for 2nd matrix..");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
		printf("enter the elements.=\n");
		scanf("%d",&b[i][j]);
	}
}
		for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
			{
			
		sum[i][j] = a[i][j]  + b[i][j] ;
	}
}
	printf("displaying the sum..");
	printf("\n");
		for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
			{
			
		printf("%d\t",sum[i][j]);
	}
}
	printf("\n");
	return 0;
	
}
