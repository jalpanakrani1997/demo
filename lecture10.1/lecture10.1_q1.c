#include <stdio.h>
int cube(int);
int main()
{
    int no;
    printf("Enter any number:");
    scanf("%d", &no);
    int a = cube(no);

    printf("cube is : %d", a);
}

int cube(int no)
{
    return no * no * no;
}
