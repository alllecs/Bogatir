#include <stdio.h>
#include <stdlib.h>

int print_str(int WIDTH, int x0, int w)
{
	int i;

	for (i = 0; i < x0; i++) {
                printf("-");
        }
        for (i = 0; i < w; i++) {
                 printf("*");
        }
        for (i = 0; i < WIDTH - x0 - w; i++) {
                printf("-");
        }
	printf("\n");
        return 0;

}

int main(void)
{
	print_str(10, 3, 5);
	return 0;
}
