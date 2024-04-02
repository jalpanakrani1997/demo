#include <stdio.h>
main()
{
    char str[10], rev[10];
    int i, j = 0, f = 0, len = 0;

    printf("enter any string:");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    for (i = len - 1; i >= 0; i--)
    {
        rev[j++] = str[i];
    }
    rev[j++] = '\0';

    printf("%s is the reverse string\n", rev);

    for (i = 0; i <= len; i++)
    {
        if (str[i] != rev[i])
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("%s is a palindome");
    }
    else
    {
        printf("%s is a not palindrome");
    }
}