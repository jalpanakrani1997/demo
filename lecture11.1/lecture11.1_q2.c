#include <stdio.h>
int main()
{
    int x, y;

    printf("\nEnter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);

    printf("\nBefore swapping :\n");
    printf("x : %d\n", x);
    printf("y : %d\n", y);

    int *a = &x;
    int *b = &y;
    int c = *a;
    *a = *b;
    *b = c;

    printf("\nAfter swapping :\n");
    printf("x : %d\n", x);
    printf("y : %d\n", y);

    printf("\n");
}
