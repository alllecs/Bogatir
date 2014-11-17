#include <stdio.h>

int main()
{
	int a;
	int b;

	a = b = 5;
	a + b;
	a++ + b;
	++a + b;
	a-- + b;
	printf("%d %d", a, b);
}
