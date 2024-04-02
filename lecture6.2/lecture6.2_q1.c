#include <stdio.h>
main()
{
    int i ,n;
    printf("Enter any number: ");
    scanf("%d",&n);

    i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= n);
}