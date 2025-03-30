#include<stdio.h>
int main()
{
int i ,n,fact,j,sum=0;
printf("enter any number =");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	fact =1;
	for(j=1;j<=i;j++)
	{
		fact = fact * j ;
		
	}
	sum = sum + fact;
}
//	sum = sum + fact;
printf("the sum is %d",sum);
return 0;

}
