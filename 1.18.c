#include <stdio.h>

int main()
{
	long c = 0;

	while (getchar() != '\n')
		++c;

	printf("%ld\n", c);

	return 0;
}
