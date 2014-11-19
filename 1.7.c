#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = b = 5;
	printf("%d %d\n", a, b);
	printf("a + b = %d\n", a + b);
	printf("a++ + b = %d\n", a++ + b);
	printf("++a + b = %d\n", ++a + b);
	printf("a-- + b = %d\n", a-- + b);
	printf("%d %d\n", a, b);
	return 0;
}
