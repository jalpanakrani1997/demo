#include <stdio.h>
main()
{
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("This number is Positive: %d\n", number);
    }
    else if (number < 0)
    {
        printf("This number is Negative: %d\n", number);
    }
    else
    {
        printf("This number is Neutral: %d\n", number);
    }
}