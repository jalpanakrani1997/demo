#include <stdio.h>
#define PI 3.14159

main()
{
    float a, area;

    printf("Enter the area of a circle: ");
    scanf("%f", &a);

    area = PI * a * a;

    printf("The area of the circle is: %f", area);
}

