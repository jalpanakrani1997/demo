#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char *username;
    char *password;

    printf("Enter the username: ");
    gets(username);

    printf("\nEnter the password: ");
    gets(password);

    if (strcmp(username, "user") == 0)
    {

        if (strcmp(password, "default") == 0)
        {
            printf("\nUser successfully logged in...");
        }
        else
        {
            printf("\nPassword entered is invalid");
        }
    }
    else
    {
        printf("\nUsername entered is invalid");
    }

    getch();
}
