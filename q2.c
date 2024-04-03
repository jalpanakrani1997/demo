#include <stdio.h>
int main()
{
    int i = 0, count = 0;
    char a[1000];

    printf("Input a string : ");
    gets(a);

    while (a[i] != '\0')
    {
        if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U')
            count++;
        i++;
    }

    printf("Number of vowels in the string: %d", count);

    return 0;
}
