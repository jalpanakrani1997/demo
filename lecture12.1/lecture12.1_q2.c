#include <stdio.h>
struct Emp
{
    int id;
    char name[50];
    int age;
    char role[100];
    char city[100];
    int expe;
    char company[100];
}

main()
{
    int no, i;

    printf("\nEnter the Number of Employees : ");
    scanf("%d", &no);

    struct Emp emp[no];
    for (i = 1; i <= no; i++)
    {
        printf("\nEnter details for Employees : %d\n", i);

        printf("Enter Id : ");
        scanf("%d", &emp[i].id);

        printf("Enter Name : ");
        fflush(stdin);
        gets(emp[i].name);

        printf("Enter Age : ");
        scanf("%d", &emp[i].age);

        printf("Enter Role : ");
        fflush(stdin);
        gets(emp[i].role);

        printf("Enter City : ");
        fflush(stdin);
        gets(emp[i].city);

        printf("Enter Experience : ");
        scanf("%d", &emp[i].expe);

        printf("Enter Company Name : ");
        fflush(stdin);
        gets(emp[i].company);
    }
    printf("\nEmployees details: \n");

    for (i = 1; i <= no; i++)
    {
        printf("\nEmployees No. : (%d)\n", i);

        printf("Id : %d\nName : %s\nAge : %d\nRole : %s\nCity : %s\nExperience : %d\nCompany : %s", 
        emp[i].id, emp[i].name, emp[i].age, emp[i].role, emp[i].city, emp[i].expe, emp[i].company);
        printf("\n");
    }
    printf("\n");
}