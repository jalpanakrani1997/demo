#include <stdio.h>
main()
{
    char str[50];
    int i, j, no, c = 1;

    printf("Enter any string:");
    gets(str);
    for (j = 0; str[j]; j++)
    {
        no = j;
    }

    printf("Frequency of each letter: \n");
    for (i = 0; i < no; i++)
    {
        c = 1;
        if (str[i])
        {
            for (j = i + 1; j < no; j++)
            {
                if (str[i] == str[j])
                {
                    c++;
                    str[j] = '\0';
                }
            }
            printf("%c => %d \n", str[i], c);
        }
    }
}
