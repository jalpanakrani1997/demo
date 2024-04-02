#include <stdio.h>
int length(char str[50]);

int main()
{
    char str[50];
    int i, len;

    printf("Enter any string:");
    gets(str);

    len = length(str);
    printf("length is:%d", len);
}

int length(char str[50])
{
    int i, len = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}