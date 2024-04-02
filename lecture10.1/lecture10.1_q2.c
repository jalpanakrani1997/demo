#include <stdio.h>
int divi(int);
int main()
{
    int no;
    printf("Enter any number: ");
    scanf("%d", &no);

    if (divi(no))
    {
        printf("The given number is divisible by both 3 & 5.");
    }
    else
    {
        printf("The given number is not divisible by both 3 & 5.");
    }
}
 
int divi(int no)
{
    if (no % 3 == 0 && no % 5 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
