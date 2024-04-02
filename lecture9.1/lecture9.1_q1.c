#include <stdio.h>
main()
{
    int i;
    char a[50];
    
    printf("\nEnter any string: ");
    gets(a);

    printf("\nUppercase string: ");
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
        {
            a[i] -= 32;
        }
        printf("%c", a[i]);
    }
    printf("\n\n");
}