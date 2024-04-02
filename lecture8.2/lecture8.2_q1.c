#include <stdio.h>
main()
{
    int i, n1, n2;

    printf("Enter array A's size:");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter array A's elements:\n");
    for (i = 0; i < n1; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter array B's size:");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter array B's elements:\n");
    for (i = 0; i < n2; i++)
    {
        printf("b[%d]=", i);
        scanf("%d", &b[i]);
    }
    
    int c[i];
    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }
    printf("\nArray C is:");
    for (i = 0; i < n1 + n2; i++)
    {
        printf(" %d,", c[i]);
    }
}