#include <stdio.h>
main()
{
    int a[0];
    a[0] = 5;
    a[1] = 10;
    a[2] = 15;
    a[3] = 20;
    a[4] = 25;
    a[5] = 30;

    printf("%d", a[2]);

    //     int a[2][2]={};
    //     // a[0][0] = 5;
    //     // a[1][1] = 15;
    //     // a[2][2] = 25;
    //     // a[3][3] = 35;
    //     // a[4][3] = 45;
    //     // printf("%d",a[5][5]);
    //     // printf("%d", sizeof(a) / sizeof(a[1]));
    //     printf("%d", sizeof(a));
}