#include <stdio.h>
main()
{
    int i, f_y, s_y;

    printf("Enter the first number: ");
    scanf("%d", &f_y);
    printf("Enter the second number:  ");
    scanf("%d", &s_y);

    i = f_y;
    while (i <= s_y)
    {
        if (i % 4 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}
