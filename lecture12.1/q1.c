#include <stdio.h>
struct Student
{
    int Id;
    char name[200];
    int contact;
} main()
{
    int no, i;
    // struct Student s1;
    // printf("%d", sizeo2f(s1));
    printf("Enter Number of students: ");
    scanf("%d", &no);
    struct Student s[no];

    for (i = 0; i < no; i++)
    {
        printf("Enter Id:");
        scanf("%d", &s[i].Id);

        printf("Enter Name:");
        fflush(stdin);
        gets(s[i].name);

        printf("Enter contact :");
        scanf("%d", &s[i].contact);
    }

    printf("Students Details Are :");
    for (i = 0; i < no; i++)
    {
        printf("Id is:%d\n", s[i].Id);
        printf("Name is:%s\n", s[i].name);
        printf("Contact is:%d\n", s[i].contact);
    }
}