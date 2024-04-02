#include <stdio.h>
main()
{
    int i, j, row, col;

    printf("Enter the array's row size:");
    scanf("%d", &row);

    printf("Enter the array's column size:");
    scanf("%d", &col);

    int no1[row][col], no2[row][col], no3[row][col];

    printf("\nEnter array A's elements:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &no1[i][j]);
        }
    }

    printf("\nEnter array B's elements:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &no2[i][j]);
        }
    }

    printf("\nArray C is:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            no3[i][j] = no1[i][j] + no2[i][j];
            printf("%d  ", no3[i][j]);
        }
        printf("\n");
    }
}