#include<stdio.h>
    struct students
    {
        int id;
        char name[20];
        char gender[10];
        char address[20];
        float marks[5];      
        float percentage;
    };
int main()
{
    struct students stu[2],temp;
    int i,j,total=0;
    for(i=0;i<2;i++)
    {
        total =0;
        printf("Enter the id of the student %d:",i+1);
        scanf("%d",&stu[i].id);
        printf("Enter the name of the student:");
        scanf("%s",stu[i].name);
        printf("Enter the gender of the student:");
        scanf("%s",stu[i].gender);
        printf("Enter the address of the student:");
        scanf("%s",stu[i].address);
         printf("Enter the marks in subject %d:",i+1);
        for(j=0;j<5;j++)
        {
            scanf("%f",&stu[i].marks[j]);
            total+=stu[i].marks[j];
            stu[i].percentage=total/5.0;
        }
    }
    for(i=0;i<2-1;i++)
    {
        for(j=i+1;j<2;j++)
        {
            if(stu[i].percentage<stu[j].percentage)
            {
                temp = stu[i];
                stu[i]=stu[j];
                stu[j]=temp;

            }
        }
    }
    printf("Id\tName\tGender\tAddress\tPercentage\n");
for(i=0;i<2;i++)
{
printf("%d\t%s\t%s\t%s\t%.2f\n",stu[i].id,stu[i].name,stu[i].gender,stu[i].address,stu[i].percentage);
}
}

