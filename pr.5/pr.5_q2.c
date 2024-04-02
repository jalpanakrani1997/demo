#include <stdio.h>
main()
{
    int i, j, row, col, max;

    printf("Enter the array's row size:");
    scanf("%d", &row);

    printf("Enter the array's column size:");
    scanf("%d", &col);

    int no[row][col];

    printf("Enter array's elements:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &no[i][j]);
        }
    }

    max = no[0][0];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (max < no[i][j])
            {
                max = no[i][j];
            }
        }
    }
    printf("The largest element is: %d", max);
}