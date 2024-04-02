#include <stdio.h>
main()
{
    int i, j, row, col;

    printf("Enter the array's row size:");
    scanf("%d", &row);

    printf("Enter the array's column size:");
    scanf("%d", &col);

    int a[row][col];
    printf("\nEnter array's elements:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }









    int ro, co, cosum = 0, rosum = 0;

    printf("\nEnter row number: ");
    scanf("%d", &ro);

    printf("Elements of row %d: ", ro);
    for (j = 0; j < col; j++)
    {
        printf("%d,", a[ro][j]);
        rosum += a[ro][j];
    }
    printf("\nThe sum of row %d: %d\n", ro, rosum);

    printf("\nEnter column number: ");
    scanf("%d", &co);

    printf("Elements of column %d: ", co);
    for (i = 0; i < row; i++)
    {
        printf("%d,", a[i][co]);
        cosum += a[i][co];
    }
    printf("\nThe sum of column %d: %d", co, cosum);    
}