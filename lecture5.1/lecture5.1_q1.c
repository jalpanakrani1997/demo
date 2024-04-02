#include <stdio.h>
main()
{
    int a, b;

    printf("Enter a value of the first number: ");
    scanf("%d", &a);

    printf("Enter a value of the second number: ");
    scanf("%d", &b);

    if (a < b)
    {
        printf("The minimum number is: %d\n", a);
    }
    else
    {
        printf("The minimum number is: %d", b);
    }
}
