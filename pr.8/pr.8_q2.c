#include <stdio.h>
int cube(int *ptr, int no);

int main()
{
    int no, i, j, *ptr;
    printf("\nEnter array's size : ");
    scanf("%d", &no);

    int a[no][no];
    printf("\nEnter array elements :\n");
    for (i = 0; i < no; i++)
    {
        for (j = 0; j < no; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    ptr = &a[0][0];
    cube(&a[0][0], no);
}

int cube(int *ptr, int no)
{
    int i, j;
    printf("\nCubes of all elements:\n");
    for (i = 0; i < no; i++)
    {
        for (j = 0; j < no; j++)
        {
            int p = (*(ptr + i * no + j));
            printf("%d  ", p * p * p);
        }
        printf("\n");
    }
    printf("\n");
}
