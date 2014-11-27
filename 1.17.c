#include <stdio.h>

int main()
{
	char c;

	c = getchar();
	while (getchar() != EOF)
	putchar(c);
	return 0;
}
