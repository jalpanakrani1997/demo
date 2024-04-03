#include <stdio.h>
main()
{
    int n, i, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2)
    {
        sum += i;
    }

    printf("Sum of numbers %d\n", sum);
}
