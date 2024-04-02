#include <stdio.h>
int main()
{
    int i, no;

    printf("Enter the array's size: ");
    scanf("%d", &no);
    
    int a[no];

    printf("Enter array's elements: \n");
    for (i = 0; i < no; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int *ptr[no];

    printf("Square of each element :\n");
    for (i = 0; i < no; i++)
    {
        ptr[i] = &a[i];
    }
    for (i = 0; i < no; i++)
    {
        printf("%d, ", *ptr[i] * *ptr[i]);
    }
   
}