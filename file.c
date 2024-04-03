#include <stdio.h>
main()
{
    char filename[100] = "file.txt";
    FILE *ptr = fopen(filename, "r");
    char con[100];
    if (ptr == '\0')
    {
        printf("file not exits...\n");
    }
    else
    {
        printf("curent file content:\n");
        printf("------------------\n");
        while (fgets(con, 5, ptr) != '\0')
        {
            printf("%s", con);
        }
        fclose(ptr);
        ptr = fopen(filename, "a");
        printf("enter your data...");
        gets(con);

        fputs("\n", ptr);
        fputs(con, ptr);

        printf("data inserted successfully....\n");
        fclose(ptr);

        ptr=fopen(filename,"r");
        printf("\n after write ,file content:\n");
        while (fgets(con, 5, ptr) != '\0')
        {
            printf("%s", con);
        }
    }
}
