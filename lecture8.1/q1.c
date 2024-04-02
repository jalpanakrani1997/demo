#include <stdio.h>
main()
{
    int i, no;

    printf("enter the number:");
    scanf("%d", &no);

    int a[no];
    printf("enter element number:\n");

    for (i = 0; i < no; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    // int n, i;
    // printf("enter array size:");
    // scanf("%d", &n);
    // printf("enter array element:\n");
    // int a[n], b[n], c[n];
    // for (i = 0; i < n; i++)
    // {
    //     printf("a[%d]=", i);
    //     scanf("%d", &a[i]);
    // }
    // for (i = 0; i < n; i++)
    // {
    //     printf("b[%d]=", i);
    //     scanf("%d", &b[i]);
    // }
    // printf("array c is:");
    // for (i = 0; i < n; i++)
    // {
    //     c[i] = a[i] + b[i];
    //     printf(" %d", c[i]);
    // }
}