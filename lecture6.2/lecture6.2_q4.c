#include <stdio.h>
main()
{
    int i, no1, no2, no3, num;

    printf("Enter any number: ");
    scanf("%d", &num);

    no1 = 0;
    no2 = 1;
    printf("%d %d", no1, no2);

    for (i = 2; i < num; i++)
    {
        no3 = no1 + no2;
        printf(" %d", no3);
        no1 = no2;
        no2 = no3;
    }
}
