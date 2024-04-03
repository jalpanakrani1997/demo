#include <stdio.h>
main()
{
    int a[] = {2, 4, 6, 8, 10};
    int *p, i;
    p = &a;

    for (i = 0; i < 5; i++)
    {
        // printf("%d => %d\n", p+i, *(p+i));
        // printf("%d\n",a[i]);
        printf("%d\n", p[i]);
    }

    // printf("%d\n", *p);
    // printf("%u\n", *p);
}