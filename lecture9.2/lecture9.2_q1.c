#include <stdio.h>
#include <string.h>
#include <ctype.h>
main()
{
    char pass[20];
    int i, letter = 0, digit = 0, special = 0;
    printf("\nCreate your password:");
    scanf("%s", &pass);
    if (strlen(pass) < 6){
        printf("Minimum 6 digit enter\n");
    }
    for (i = 0; pass[i] != '\0'; i++) {
        if (isalpha(pass[i])){
            letter = 1;
        }
        else if (isdigit(pass[i])){
            digit = 1;
        }
        else if ((pass[i]) == '@'){
            special = 1;
        }
    }

    if (letter && digit && special){
        printf("Your password is Strong.");
    }
    else{
        printf("Your password is not Strong.");
    }
    printf("\n\n");
}