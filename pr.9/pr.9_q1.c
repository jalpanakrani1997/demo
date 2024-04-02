#include <stdio.h>
main()
{
    FILE *evenfile, *oddfile;
    int i;

    evenfile = fopen("evenfile.txt", "w");
    if (evenfile == NULL)
    {
        printf("Error opening evenfile.txt\n");
    }

    oddfile = fopen("oddfile.txt", "w");
    if (oddfile == NULL)
    {
        printf("Error opening oddfile.txt\n");
    }

    for (i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(evenfile, "%d, ", i);
        }
        else
        {
            fprintf(oddfile, "%d, ", i);
        }
    }

    fclose(evenfile);
    fclose(oddfile);
}
