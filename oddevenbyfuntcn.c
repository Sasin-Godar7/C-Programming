#include<stdio.h>
void oddeven();
void main()
{
    oddeven();
}
void oddeven()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is a even number",num);
    }
    else
    {
        printf("%d is a odd number",num);
    }
}
