//  to reverse a string without using lib func

#include<stdio.h>
void main()
{
	
	char s1[10],s2[10];
	int i=0,j=0;
	
	
	printf("enter the text :");
	scanf("%s",s1);
	
	while (s1[i] != '\0')
	{
		i++ ;
	}
       	j=i-1;
       	i=0;
	while(s1[i] != '\0')
	{
		s2[j] = s1[i];
		i++ ;
		j--;
	}
	s2[i] = '\0' ;
	printf("text after reverse is %s",s2);
}
	


