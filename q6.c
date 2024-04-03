#include <stdio.h>
struct movies
{
    char movie_name[100];
    char title[100];
    int genre;
    char langauge[50];
}

main()
{
    int i, no;
    printf("\nEnter the number of movie :");
    scanf("%d", &no);
    struct movies movie[no];

    for (i = 0; i < no; i++)
    {
        printf("\nEnter details for movie : %d\n", i + 1);

        printf("Enter movie Name : ");
        fflush(stdin);
        gets(movie[i].movie_name);

        printf("Enter movie title : ");
        fflush(stdin);
        gets(movie[i].title);

        printf("Enter movie genre : ");
        scanf("%d", &movie[i].genre);

        printf("Enter movie langauge : ");
        fflush(stdin);
        gets(movie[i].langauge);
    }

    printf("\nMovie Details Are :\n");

    for (i = 0; i < no; i++)
    {
        printf("\nMovie No. : (%d)\n", i + 1);

        printf("Name is : %s\n", movie[i].movie_name);
        printf("Title is : %s\n", movie[i].title);
        printf("Genre is : %d\n", movie[i].genre);
        printf("Langauge is : %s\n", movie[i].langauge);
    }
    printf("\n");
}