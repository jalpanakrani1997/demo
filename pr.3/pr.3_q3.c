#include <stdio.h>
main()
{
    int no, fd, ld, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &no);

    ld = no % 10;
    while (no >= 10)
    {
        no = no / 10;
    }
    fd = no;
    sum = fd + ld;
    
    printf("The sum of the first and the last digit: %d", sum);
}
