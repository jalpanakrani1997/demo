#include <stdio.h>
main()
{
    int no;

    printf("enter your number:");
    scanf("%d", &no);

    for (int i = 1; i <= 10; ++i)
    {
        printf("%d*%d=%d\n", no, i, no * i);
    }
}
