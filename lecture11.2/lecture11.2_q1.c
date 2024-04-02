#include <stdio.h>
int main()
{
    int i, no;
    printf("Enter the array's size: ");
    scanf("%d", &no);

    int a[no];

    printf("Enter array elements:\n");
    for (i = 0; i < no; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Reversed array elements:");

    int *ptr[no];
    for (i = 0; i < no; i++)
    {
        ptr[i] = &a[i];
    }

    for (i = no - 1; i >= 0; i--)
    {
        printf("%d ", *ptr[i]);
    }
}