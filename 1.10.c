#include <stdio.h>

int print_str(int WIDTH, int x0, int w)
{
}
int main(void)
{
	int x;

	print_str(WIDTH, 5);
	print_str(WIDTH, 4);

	for(x=0; x < x0; x++) {
		printf("-");
	}
	for(x=0; x < w; x++) {
		printf("*");
	}
	return 0
}
