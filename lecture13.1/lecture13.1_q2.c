#include <stdio.h>
main()
{
    FILE *file;
    int i;

    file = fopen("between.txt", "w");
    if (file == NULL)
    {  
        printf("Unable to create file.\n");
        return 1;
    }

    for (i = 1; i <= 50; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            fprintf(file, "%d, ", i);
        }
    }

    fclose(file);

    printf("Numbers written to file successfully.\n");
}
