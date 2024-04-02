#include <stdio.h>
main()
{
    int i, no;

    printf("Enter the array's size:");
    scanf("%d", &no);

    int a[no];
    
    printf("Enter array's elements:\n");
    for (i = 0; i < no; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    
    printf("Negative elements from an Array:");
    for (i = 0; i < no; i++)
    {
        if (a[i] < 0)
        {
            printf(" %d,", a[i]);
        }
    }
}