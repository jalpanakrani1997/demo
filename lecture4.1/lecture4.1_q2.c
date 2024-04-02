#include <stdio.h>
main()
{
    int a, b;

    printf("Enter the value of A:");
    scanf("%d", &a);
    printf("Enter the value of B:");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nThe value of A: %d", a);
    printf("\nThe value of B: %d", b);
    return 0;
}
