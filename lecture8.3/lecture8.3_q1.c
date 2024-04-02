#include <stdio.h>
main()
{
    int i, j, row, col, sum = 0;

    printf("Enter the array's row size:");
    scanf("%d", &row);

    printf("Enter the array's column size:");
    scanf("%d", &col);

    int no[row][col];
    printf("\nEnter array's elements:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &no[i][j]);

            sum += no[i][j];
        }
    }

    double avg = (double)sum / (row * col);
    printf("\nAverage of an Array:%.2f", avg);
}