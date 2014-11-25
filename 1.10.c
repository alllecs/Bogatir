#include <stdio.h>
#include <stdlib.h>

int print_str(int WIDTH, int x0, int w)
{
	int i;

	for(i = 0; i < x0; i++) {
                printf("-");
        }
        for(i = 0; i < x0 + w; i++) {
                 printf("*");
        }
        for(i = 0; i < WIDTH; i++) {
                printf("-");
        }
        return 0;

}

int main(void)
{
	print_str(3, 4, 5);
	return 0;
}
