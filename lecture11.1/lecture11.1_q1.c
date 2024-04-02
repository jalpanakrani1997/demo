#include <stdio.h>
int main()
{
    int i, no;

    printf("\nEnter the array's size: ");
    scanf("%d", &no);

    int a[no];

    printf("\nEnter array's elements: \n");
    for (i = 0; i < no; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int *ptr[no];

    printf("\nSquare of each element:\n");

    for (i = 0; i < no; i++)
    {
        ptr[i] = &a[i];
        printf("%d, ", *ptr[i] * *ptr[i]);
    }
    printf("\n\n");
}