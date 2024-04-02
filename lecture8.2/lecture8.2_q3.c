#include <stdio.h>
main()
{
    int i, n;

    printf("Enter array size:");
    scanf("%d", &n);

    int a[n];
    
    printf("\nEnter array elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("\nThe squares are: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d,", a[i] * a[i]);
    }
    printf("\n");
}