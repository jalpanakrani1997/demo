#include <stdio.h>
int sumArray(int a[], int no);
int main()
{
    int i, no, sum;

    printf("Enter array size: ");
    scanf("%d", &no);

    int a[no];
    
    printf("Enter array elements:\n");
    for (i = 0; i < no; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    sum = sumArray(a, no);

    printf("The sum of an Array: %d", sum);
}

int sumArray(int a[], int no)
{
    int i, sum = 0;
    for (i = 0; i < no; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}