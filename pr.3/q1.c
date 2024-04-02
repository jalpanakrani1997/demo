#include <stdio.h>
main()
{
    int i, no = 12000;
    i = 0;
    while (no != 0)
    {
        no = no / 10;
        i++;
    }
    printf("%d", i);
}