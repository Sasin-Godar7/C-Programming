#include<stdio.h>
    struct students
    {
        int id;
        char name[20];
        char gender[10];
        float marks[5];   
        float percentage; 
    };
int main()
{
    struct students stu;
    int i,j,total=0;
        printf("Enter the id of the student:");
        scanf("%d",&stu.id);
        printf("Enter the name of the student:");
        scanf("%s",stu.name);
        printf("Enter the gender of the student:");
        scanf("%s",stu.gender);
        for(j=0;j<5;j++)
        {
            printf("Enter \ marks of the subject %d:",j+1);
            scanf("%f",&stu.marks[j]);
            total+=stu.marks[j];
        }
   stu.percentage=total/5.0;
   printf("Id\tName\tGender\tPercentage\n");
    printf("%d\t%s\t%s\t%.2f",stu.id,stu.name,stu.gender,stu.percentage);
return 0;
}

