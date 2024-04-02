#include <stdio.h>
int main()
{
    char str[50];
    int len;
    printf("any string : ");
    gets(str);

    char *ptr;
    ptr = str;
    len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }

    printf("length:%d", len);
}