#include <stdio.h>
main()
{
    float celsius, fahrenheit;

    printf("The temperature in Celsius: ");
    scanf("%f", &celsius);

    // fahrenheit = (celsius * 1.8) + 32;
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("The temperature in Fahrenheit: %0.2f", fahrenheit);
}