#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    int chem;
    int maths;
    int phy;
};

float per(int total)
{
    return ((float)total / 300) * 100;
}

int main()
{
    int i;
    struct Student stu[5];

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Roll no => ");
        scanf("%d", &stu[i].roll);

        printf("Name => ");
        fflush(stdin);
        gets(stu[i].name);

        printf("Chemistry => ");
        scanf("%d", &stu[i].chem);

        printf("Mathematics => ");
        scanf("%d", &stu[i].maths);

        printf("Physics => ");
        scanf("%d", &stu[i].phy);
    }

    FILE *ptr = fopen("Marksheet.txt", "w");
    if (ptr == NULL)
    {
        printf("Error opening file.");
        return -1;
    }

    for (i = 0; i < 5; i++)
    {
        fprintf(ptr, "%s (%d)\n", stu[i].name, stu[i].roll);
        fprintf(ptr, "Chemistry => %d\n", stu[i].chem);
        fprintf(ptr, "Mathematics => %d\n", stu[i].maths);
        fprintf(ptr, "Physics => %d\n", stu[i].phy);

        int total = stu[i].chem + stu[i].maths + stu[i].phy;
        
        fprintf(ptr, "Total => %d/300\n", total);
        fprintf(ptr, "Percent => %.2f%%\n\n", per(total));
    }

    fclose(ptr);
    printf("\nGenerate Marksheets.\n");
}
