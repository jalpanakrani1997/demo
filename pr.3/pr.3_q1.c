#include <stdio.h>
main()
{
    int i = 97;
    do
    {
        printf("%c ", i);
        i = i + 4;
    } while (i <= 122);

    // for (int i = 97; i <= 122; i += 4)
    // {
    //     printf("%c ", i);
    // }
}