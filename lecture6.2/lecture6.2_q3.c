#include <stdio.h>
main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    i = 2;
    do
    {
        printf("%d ", i);
        i = i + 2;
    } while (i <= n);
}
