#include <stdio.h>
struct Student
{
    int id;
    char name[100];
    int age;
    int standard;
    char course[100];
    char school[50];
    char city[100];
}

main()
{
    int i;
    struct Student stu[3];

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter details for students : \n", i + 1);

        printf("Enter Id : ");
        scanf("%d", &stu[i].id);

        printf("Enter Name : ");
        fflush(stdin);
        gets(stu[i].name);

        printf("Enter Age : ");
        scanf("%d", &stu[i].age);

        printf("Enter Standard : ");
        scanf("%d", &stu[i].standard);

        printf("Enter Course : ");
        fflush(stdin);
        gets(stu[i].course);

        printf("Enter school : ");
        fflush(stdin);
        gets(stu[i].school);

        printf("Enter City : ");
        fflush(stdin);
        gets(stu[i].city);
    }

    printf("\nStudent Details Are :\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nStudent No. : (%d)\n", i + 1);
        printf("Id is : %d\n", stu[i].id);
        printf("Name is : %s\n", stu[i].name);
        printf("Age is : %d\n", stu[i].age);
        printf("Standard is : %d\n", stu[i].standard);
        printf("Course is : %s\n", stu[i].course);
        printf("School is : %s\n", stu[i].school);
        printf("City is : %s\n", stu[i].city);
    }
    printf("\n");
}