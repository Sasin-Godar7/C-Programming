#include<stdio.h>
int main()
{
	 int a[10][10],b[10][10],c[10][10];
	int i,j,k,sum,p,q,m,n ;
	
	printf("enter how many rows ans colums for first matrxi :");
	scanf("%d%d",&m,&n);
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
	
		printf("enter the elements :");
		scanf("%d\t",&a[i][j]);
	}
	}
	printf("enter the rows and colum for 2nd matrix :");
	scanf("%d%d",&p,&q);
	printf("\n");
	
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
			
			printf("enter the element :");
			scanf("%d\t",&b[i][j]);
		}
	}
		// performing multiply
if(n!=p)
{
	printf("cNT EROOR");
	
}

else
{


for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
	{
		
		for(k=0;k<p;k++)
		{
			sum  = sum +( a[i][k] * b[k][j]);
		}
		c[i][j] = sum ;
		sum = 0;
	}
}




for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d\t",c[i][j]);

	}
	
	printf("\n");
		
		
}
}
return 0;
}


















	

