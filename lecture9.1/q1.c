#include <stdio.h>
main()
{
    int i;
    char a[100];

    printf("\nEnter any string: ");
    gets(a);

    for (i = 0; a[i]; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] += 32;
        }
        else if (a[i] >= 97 && a[i] <= 122)
        {
            a[i] -= 32;
        }
    }
    printf("\nToggle case string: %s", a);
    printf("\n\n");
}