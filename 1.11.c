#include <stdio.h>
#include <stdlib.h>

int print_str(int offset, int height)
{
	int i, j, k;

	for (i = 0; i <= height - 1; i++) {
		for (j = 1; j <= offset - i; j++) {
			printf(" ");
		}
		for (k = 1; k <= i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int main(int argc, char *argv[])
{
	print_str(atoi(argv[1]), atoi(argv[2]));
	return 0;
}
