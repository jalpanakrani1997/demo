#include <stdio.h>
int main()
{
    int n1, n2;

    printf("Enter a value of the first number:");
    scanf("%d", &n1);

    printf("Enter a value of the second number:");
    scanf("%d", &n2);

    (n1 < n2) ?

              printf("The minimum value is: %d", n1)
              : printf("The minimum value is: %d", n2);

    return 0;
}
