#include <stdio.h>
int main()
{
    int i, no, sum;
    printf("enter array size:");
    scanf("%d", &no);

    int a[no];
    printf("enter array element:\n");
    for (i = 0; i < no; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int arrsum(int no, int a[])
{
    int i, sum = 0;
    for (i = 0; i < no; i++)
    {
        sum = sum + a[i];
    }
}