#include <stdio.h>
int main()
{
    int no, i, fact = 1;

    printf("Enter any number: ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
    {
        fact = fact * i;
    }
    printf("The factorial is: %d", fact);
    
    return 0;
}
