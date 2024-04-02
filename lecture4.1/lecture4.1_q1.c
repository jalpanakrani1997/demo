#include <stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter the Value of A: ");
	scanf("%d", &a);
	printf("Enter the Value of B: ");
	scanf("%d", &b);

	c = a;
	a = b;
	b = c;

	printf("\nThe value of A: %d", a);
	printf("\nThe value of B: %d", b);

	return 0;
	
}

