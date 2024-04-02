#include <stdio.h>
main()
{
    char str[20];
    int i, len, flag = 0;

    printf("Enter any string: ");
    gets(str);

    for (len = 0; str[len] != '\0'; len++){}

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Given string is a Palindrome.");
    }
    else
    {
        printf("Given string is not a Palindrome.");
    }
}