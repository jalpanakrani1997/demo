#include <stdio.h>
main()
{
    float bs, hra, da, ta;
    float gs;

    printf("Base salary:");
    scanf("%f", &bs);

    printf("HRA=");
    scanf("%f", &hra);

    printf("DA=");
    scanf("%f", &da);

    printf("TA=");
    scanf("%f", &ta);

    hra = bs * (hra / 100);
    da = bs * (da / 100);
    ta = bs * (ta / 100);

    gs = bs + hra + da + ta;

    printf("Rs.= %.2f\n", gs);
}
