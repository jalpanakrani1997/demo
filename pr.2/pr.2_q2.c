#include <stdio.h>
main()
{
    int units;
    float bill, total;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units <= 50)
    {
        total = 50 * 0.50;
    }
    else if (units <= 150)
    {
        total = 50 * 0.50 + (units - 100) * 0.75;
    }
    else if (units <= 250)
    {
        total = 50 * 0.50 + 100 * 0.75 + (units - 100) * 1.20;
    }
    else
    {
        total = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    bill = total + total * 0.20;

        printf("Electricity Bill = Rs. %.2f", bill);
}
