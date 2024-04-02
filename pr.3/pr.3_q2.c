#include <stdio.h>
main()
{
    int i, no;

    printf("Enter any number:");
    scanf("%d", &no);

    i = 0;
    while (no != 0)
    {
        no = no / 10;
        i++;
    }
    printf("Total number of digits: %d\n", i);
}
