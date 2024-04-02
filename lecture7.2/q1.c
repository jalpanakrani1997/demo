#include <stdio.h>
main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k > i; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    // int i, j, k;
    // for (i = 5; i >= 1; i--)
    // {
    //    
    //     for (k = i; k <=5-1; k++)
    //     {
    //         printf("  ");
    //     }
    //     for (j = i; j >= 1; j--)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
    // for (i = 1; i <=5; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     for (k = i; k <=5-1; k++)
    //     {
    //         printf("  ");
    //     }
    //     for (j = i; j >= 1; j--)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // int i, j, k;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (k = 1; k < i; k++)
    //     {
    //         printf(" ");
    //     }
    //     for (j = i; j <= 5; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             printf("1");
    //         }
    //         else
    //         {
    //             printf("0");
    //         }
    //     }
    //     printf("\n");
    // }

    // int i, j, k;
    // for (i = 5; i >= 1; i--)
    // {
    //     for (k = i; k > 1; k--)
    //     {
    //         printf(" ");
    //     }
    //     for (j = i; j <= 5; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }

    // int i, j, k;
    // for (i = 5; i >= 1; i--)
    // {
    //     for (k = i; k > 1; k--)
    //     {
    //         printf(" ");
    //     }
    //     for (j = i; j <= 5; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // int i, j, k;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (k = 5; k > i; k--)
    //     {
    //         printf(" ");
    //     }
    //     for (j = i; j >= 1; j--)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
}