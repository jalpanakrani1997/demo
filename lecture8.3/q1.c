#include <stdio.h>
main()
{
    int i, j, no;
    printf("enter array element: ");
    scanf("%d", &no);
    int a[no][no];
    printf("enter array element");
    for (i = 0; i < no; i++)
    {
        for (j = 0; j < no; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < no; i++)
    {
        for (j = 0; j < no; j++)
        {

            printf("%d ,", a[i][j]);
        }
    }
}