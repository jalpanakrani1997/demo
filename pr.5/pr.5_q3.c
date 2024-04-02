#include <stdio.h>
main()
{
    int i, j, no;

    printf("Enter the array's row & column size:");
    scanf("%d", &no);

    int a[no][no];

    printf("Enter array's elements:\n");
    for (i = 0; i < no; i++)
    {
        for (j = 0; j < no; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The transpose matrix of an array:\n");
    for (i = 0; i < no; i++)
    {
        for (j = 0; j < no; j++)
        {
            printf(" %d", a[j][i]);
        }
        printf("\n");
    }
}