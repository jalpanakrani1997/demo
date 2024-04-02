#include <stdio.h>
float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
    else
    {
        return a / b;
    }
}
int modulus(int a, int b)
{
    return a % b;
}

int main()
{
    char choice;
    float num1, num2;
    do
    {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 to exit\n\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case '1':
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            printf("Addition of %.2f and %.2f is %.2f\n", num1, num2, add(num1, num2));
            break;
        case '2':
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            printf("Subtraction of %.2f and %.2f is %.2f\n", num1, num2, subtract(num1, num2));
            break;
        case '3':
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            printf("Multiplication of %.2f and %.2f is %.2f\n", num1, num2, multiply(num1, num2));
            break;
        case '4':
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            printf("Division of %.2f by %.2f is %.2f\n", num1, num2, divide(num1, num2));
            break;
        case '5':
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            printf("Modulus of %.2f by %.2f is %d\n", num1, num2, modulus((int)num1, (int)num2));
            break;
        case '0':
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != '0');
}
