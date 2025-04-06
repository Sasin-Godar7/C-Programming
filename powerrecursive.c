#include <stdio.h>
#include <math.h>

int power(int a,int b)
{
  if(b==0)
    return 1;
  return a*power(a,b-1);
}
int main()
{
  int a ,b ,result;
  printf("enter the value of a =");
  scanf("%d",&a);
  printf("enter the value of b =");
  scanf("%d",&b);
//  result = power(a,b);
  
  printf("The number %d to the power %d is %d",a,b,power(a,b));
}
