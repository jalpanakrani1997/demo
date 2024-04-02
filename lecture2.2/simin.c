#include <stdio.h>
main()
{
    int a, b, c, int_amt;

    printf("Enter the value of a, b, c : \n");
    scanf("%d %d %d", &a, &b, &c);

    int_amt = (a * b * c) / 100;

    printf("Simple interest = %d", int_amt);
}
