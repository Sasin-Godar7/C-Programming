 // to copy 1 string to another
 
 #include<stdio.h>
void main()
{
	
	char s1[10],s2[10];
	int i=0;
	printf("enter any text :");
	scanf("%s",s1);
	
	printf("\n");
	printf("the text in string 1 is %s",s1);
	
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++ ;
	}
	s2[i] = '\0' ;
	printf("text after copied in another string ia %s",s2);
}
