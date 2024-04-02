#include <stdio.h>
int main()
{
    char str[100], *ptr;
    int i;

    printf("Enter any string : ");
    gets(str);
 
    ptr = str;
    for (i = 0; *ptr != '\0'; i++)
    {
        ptr++;
    }
    printf("The length of a string is : %d",i);
}
