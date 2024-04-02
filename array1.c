#include <stdio.h>
main()
{
    int i,size, sum = 0;
    int no[size];

    printf("enter array size:");
    scanf("%d", &size);


    printf("enter array:\n");

    for (i = 0; i < size; i++)
    {
        printf("enter element:[%d]", i);
        scanf("%d", &no[i]);
    }

    for (i = 0; i < size; i++)
    {
        printf("element are:[%d]=%d\n", i, no[i]);
        sum = sum + no[i];
    }
    printf("array sum is:%d", sum);
}