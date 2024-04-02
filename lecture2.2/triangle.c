#include <stdio.h>
main()
{
    float b, h, area;

    printf("Enter Base and Height:\n");
    scanf("%f %f", &b, &h);

     area = (b * h) / 2;

    printf("Area of Triangle is %0.2f", area);
}
