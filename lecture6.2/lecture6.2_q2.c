#include <stdio.h>
main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
}
