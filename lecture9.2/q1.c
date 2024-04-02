#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isStrongPassword(char password[])
{
    int length = strlen(password);
    int Letter, Digit, Special;
    for (int i = 0; i < length; i++)
    {
        if (isalpha(password[i]))
        {
            Letter = 1;
        }
        else if (isdigit(password[i]))
        {
            Digit = 1;
        }
        else if (!isalnum(password[i]))
        {
            Special = 1;
        }
    }
}
int main()
{
    char password[100];
    printf("Create your password: ");
    scanf("%s", password);
    if (isStrongPassword(password))
        printf("Your password is Strong.\n");
    else
        printf("Your password is not Strong.\n");

    return 0;
}


// #include <stdio.h>
// #include<string.h>
// #include<ctype.h>
// main()
// {
//     int i;
//     char pass[20];
//     int Letter=0, Digit=0, Special=0;
//     printf("enter the password:");
//     scanf("%s", &pass);


//     if (strlen(pass) < 6)
//     {
//         printf("atleast 6 digit: ");
//     }


//     for (i = 0; pass[i]!='\0'; i++)
//     {
//         if (isalpha(pass[i]))
//         {
//             Letter = 1;
//         }
//         else if (isdigit(pass[i]))
//         {
//             Digit = 1;
//         }
//         else if ((pass[i]) == '@' || (pass[i]) == '$')
//         {
//             Special = 1;
//         }else{
//             printf("zero");
//         }
//     }

    
//     if (Letter && Digit && Special)
//     {
//         printf("your password is right");
//     }
//     else
//     {
//         printf("invalid");
//     }
// }