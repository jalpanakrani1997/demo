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

    for (i = 0; i < no; i++)
    {
        sum += a[i][i];
    }
    printf("\nThe sum of diagonal elements of an Array: %d", sum);
}