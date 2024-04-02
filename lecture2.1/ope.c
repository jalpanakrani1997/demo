#include <stdio.h>
main()
{
    int a, b;

    printf("Enter the value of A:");
    scanf("%d", &a);

    printf("Enter the value of B:");
    scanf("%d", &b);

    printf("The Addition of %d and %d is: %d\n", a, b, a + b);
    printf("The Subtraction of %d and %d is: %d\n", a, b, a - b);
    printf("The Multiplication of %d and %d is: %d\n", a, b, a * b);
    printf("The Division of %d and %d is: %d\n", a, b, a / b);
    printf("The Modulo of %d and %d is: %d\n\n", a, b, a % b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
}
