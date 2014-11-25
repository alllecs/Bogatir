#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int print_str(int WIDTH, int x0, int w)
{
}

int main(void)
{
	int i;
	print_str(WIDTH, x0, w);

	for(i = 0; i < x0; i++) {
		printf("-");
	}
	for(i = 0; i < x0 + w; i++) {
		 printf("*");
	}
	for(i = 0; i < WIDTH; i++) {
		printf("-");
	}
}
