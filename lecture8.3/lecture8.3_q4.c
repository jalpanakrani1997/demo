#include <stdio.h>
main()
{
    int no, i, j, sum = 0;

    printf("Enter the array's row & column size: ");
    scanf("%d", &no);

    int a[no][no];

    printf("\nEnter array's elements:\n");
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
            if (i == 0 || i == no - 1 || j == 0 || j == no - 1)
            {
                printf("%d ", a[i][j]);
                sum += a[i][j];
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\nThe sum of boundary elements of an Array: %d", sum);
}