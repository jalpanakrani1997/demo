#include <stdio.h>
main()
{
    int n, i, length;
    
    printf("Enter array size:");
    scanf("%d", &n);

    int no[n];

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &no[i]);
    }

    length = sizeof(no) / sizeof(no[0]);

    printf("Length of an Array:%d", length);
}