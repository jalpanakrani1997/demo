#include <stdio.h>
int main()
{
    char str[100], c;
    int i, freq[256] = {0};

    printf("Enter any string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        c = str[i];
        freq[c]++;
    }
    
    printf("Frequency of each letter:\n");
    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0 && (i >= 'A' && i <= 'Z' || i >= 'a' && i <= 'z'))
        {
            printf("%c => %d\n", i, freq[i]);
        }
    }
}