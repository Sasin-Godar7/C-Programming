
#include<stdio.h>
int reverse(int num);
int main()
{
    int num,result,rev;
    printf("Enter a number:");
    scanf("%d",&num);
	 printf("reverse is %d",rev);
    return 0;
}
int reverse(int num)
{
    int rem,rev=0;
    while(num!=0)
    {
        rem=num%10;
        rev=rem+(rev*10);
        num=num/10;
    }
    printf("reverse is %d",rev);
}
