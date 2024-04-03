#include <stdio.h>
main()
{
    FILE *ptr, *ptr1;
    char con;

    ptr = fopen("hello.txt", "r");
    if (ptr == NULL)
    {
        printf("Unable to open source file.\n");
    }

    ptr1 = fopen("welcome.txt", "w");
    if (ptr1 == NULL)
    {
        printf("Unable to create destination file.\n");
        fclose(ptr);
    }

    while ((con = fgetc(ptr)) != EOF)
    {
        fputc(con, ptr1);
    }

    fclose(ptr);
    fclose(ptr1);

    printf("File copied successfully.\n");
}
