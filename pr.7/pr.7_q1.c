#include <stdio.h>

int add(int no1, int no2)
{
    return no1 + no2;
}
int sub(int no1, int no2)
{
    return no1 - no2;
}
int multi(int no1, int no2)
{
    return no1 * no2;
}
int divi(int no1, int no2)
{
    return no1 / no2;
}
int modul(int no1, int no2)
{
    return no1 % no2;
}

int main()
{
    int i, no, no1, no2;

    for (i = 0; no != 0; i++)
    {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &no);

        switch (no)
        {
        case 1:
            printf("Enter the first number: ");
            scanf("%d", &no1);
            printf("Enter the second number: ");
            scanf("%d", &no2);
            printf("Addition of %d and %d is %d\n", no1, no2, add(no1, no2));
            break;

        case 2:
            printf("Enter the first number: ");
            scanf("%d", &no1);
            printf("Enter the second number: ");
            scanf("%d", &no2);
            printf("Division of %d and %d is %d\n", no1, no2, sub(no1, no2));
            break;

        case 3:
            printf("Enter the first number: ");
            scanf("%d", &no1);
            printf("Enter the second number: ");
            scanf("%d", &no2);
            printf("Multiplication of %d and %d is %d\n", no1, no2, multi(no1, no2));
            break;

        case 4:
            printf("Enter the first number: ");
            scanf("%d", &no1);
            printf("Enter the second number: ");
            scanf("%d", &no2);
            printf("Division of %d and %d is %d\n", no1, no2, divi(no1, no2));
            break;

        case 5:
            printf("Enter the first number: ");
            scanf("%d", &no1);
            printf("Enter the second number: ");
            scanf("%d", &no2);
            printf("Modulus of %d and %d is %d\n", no1, no2, modul(no1, no2));
            break;
        }
    }
}
