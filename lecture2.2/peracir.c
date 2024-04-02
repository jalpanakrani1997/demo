#include <stdio.h>
#define PI 3.14f

void main()
{
    float a, perimeter, area;

    printf("Enter of the Circle:");
    scanf("%f", &a);

    perimeter = 2 * PI * a;
    printf("Perimeter of the circle: %0.4f\n", perimeter);
}
