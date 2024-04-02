#include <stdio.h>

int main()
{
    int no, i, j;
    int cube;
    printf("Enter array's size : ");
    scanf("%d", &no);

    int a[no][no];
    printf("Enter array elements :\n");
    for (i = 0; i < no; i++)
    {
        for (j = 0; j < no; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int *ptr[no][no];
    printf("Cubes of all elements :\n");
    for (i = 0; i < no; i++)
    {
        for (j = 0; j < no; j++)
        {
            ptr[i][j] = &a[i][j];

            int cube = *ptr[i][j] * *ptr[i][j] * *ptr[i][j];

            printf("%d ", cube);
        }
        printf("\n");
    }
    printf("\n");
}
