#include <stdio.h>
#include <stdlib.h>

int print_str(int offset, int height)
{
	int i, j, k;

	for(i=0; i <= height; i++) {
		for(j = 1; j <= offset - i; j++) {
			printf(" ");
		}
		for(k = 1; k <= i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int main(void)
{
	print_str(7, 4);
	return 0;
}
