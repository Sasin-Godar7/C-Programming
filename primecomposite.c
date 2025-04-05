//#include<stdio.h>
//int main()
//{
//	int i,num,count=0;
//	printf("enter any number =");
//	scanf("%d",&num);
//	for(i=1 ;i<num;i++)
//	{
//		if(num % i == 0)
//		{
//			count ++ ;
//	
//		}
//	}
//		
//		if (count == 2)
//		{
//			printf("%d is prime number",num);
//		}
//		else
//		{
//		
//		printf("%d is composite number",num);
//	}
//		return 0;
//	}
#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf ("Enter any number :");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        c=c+1;
    }
    if (c==2)
    printf ("%d is prime number",n);
    else
    printf ("%d is composite number",n);
    return 0;
}

