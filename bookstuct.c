#include<stdio.h>
struct book
{
    char name[20];
    char author[20];
    int pages;
    float price;
};
int main()
{
    struct book b[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter name of the book %d:",i+1);
        scanf("%s",b[i].name);
        printf("Enter  name of the author:");
        scanf("%s",b[i].author);
        printf("Enter  number of pages:");
        scanf("%d",&b[i].pages);
        printf("Enter  price of the book:");
        scanf("%f",&b[i].price);
    }
    printf("\n");
    printf("\t\t\t Author\n");
    for(i=0;i<2;i++)
    {
        if(b[i].price >1000)
        {
            printf("\t\t\t%s\n",b[i].author);
        }
    }
    return 0;
} 
