#include <stdio.h>
int main()
{
    int n1, n2, n3, n4;

    printf("Enter a value of the first number:");
    scanf("%d", &n1);
    printf("Enter a value of the second number:");
    scanf("%d", &n2);
    printf("Enter a value of the third number:");
    scanf("%d", &n3);
    printf("Enter a value of the fourth number:");
    scanf("%d", &n4);

    if (n1 >= n2)
    {
        if (n1 >= n3)
        {
            if (n1 >= n4)
            {
                printf("Maximum number is: %d\n", n1);
            }
            else
            {
                printf("Maximum number is: %d\n", n4);
            }
        }
        else
        {
            if (n3 >= n4)
            {
                printf("Maximum number is: %d\n", n3);
            }
            else
            {
                printf("Maximum number is: %d\n", n4);
            }
        }
    }
    else
    {
        if (n2 >= n3)
        {
            if (n2 >= n4)
            {
                printf("Maximum number is: %d\n", n2);
            }
            else
            {
                printf("Maximum number is: %d\n", n4);
            }
        }
        else
        {
            if (n3 >= n4)
            {
                printf("Maximum number is: %d\n", n3);
            }
            else
            {
                printf("Maximum number is: %d\n", n4);
            }
        }
    }

    return 0;
}
