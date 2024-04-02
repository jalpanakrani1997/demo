#include <stdio.h>
main()
{
    int n, i;
    float no[n], sum = 0, avg;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%f", &no[i]);

        sum += no[i];
    }

    avg = sum / n;
    printf("Average of an Array: %.1f\n", avg);
}