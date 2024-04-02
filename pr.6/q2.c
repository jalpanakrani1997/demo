#include <stdio.h>
main()
{
    char str[50], i, j;
    int a = 0;
    printf("enter any string:");
    gets(str);
    
    printf("Frequency of each letter: \n");

    for (i = 65; i <= 122; i++)
    {
        a = 0;
        for (j = 0; str[j] != '\0'; j++)
        {
            if (i == str[j])
            {
                a++;
            }
        }
        if (a > 0)
        {
            printf("%c => %d\n", i, a);
        }
    }
}