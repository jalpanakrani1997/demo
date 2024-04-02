#include <stdio.h>
#include <string.h>
main()
{
    char mailvalue[] = "admin@gmail.com";
    char passwordvalue[] = "123456";

    char mail[20];
    char password[20];

    printf("\nEnter your email:");
    scanf("%s", &mail);

    printf("Enter your password:");
    scanf("%s", &password);
    printf("\n");

    if (strcmp(mail, mailvalue) == 0 && 
    strcmp(password, passwordvalue) == 0)
    {
        printf("Login Successful...");
    }
    else
    {
        printf("Login Failed. Invalid Credentials.");
    }
    printf("\n\n");
}