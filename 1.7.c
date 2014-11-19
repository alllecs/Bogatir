#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = b = 5;
	printf("%d %d", a, b);
	printf("a + b = %d", a + b);
	printf("a++ + b = %d", a++ + b);
	printf("++a + b = %d", ++a + b);
	printf("a-- + b = %d", a-- + b);
	printf("%d %d", a, b);
}
