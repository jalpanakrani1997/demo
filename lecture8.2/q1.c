#include <stdio.h>
main()
{
    int n1, n2;
    int k = 0, a[k], i;

    printf("Enter the first number:");
    scanf("%d", &n1);

    printf("Enter the second number:");
    scanf("%d", &n2);

    for (i = n1; i <= n2; i++)
    {
        if (n1 % 4 == 0)
        {
            a[k] = n1;
            k++;
        }
        n1++;
    }

    printf("The array is: ");
    for (i = 0; i < k; i++)
    {
        printf(" %d,", a[i]);
    }
}