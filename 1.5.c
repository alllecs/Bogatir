/*
Не хватает #include <stdio.h>, main, return;
Лишний then;
Не хватает "("x < 1")";
*/

#include <stdio.h>

int main(void)
{
	int x;

	printf("x = ");
	scanf("%d", &x);
	if(x >= 2) {
		printf("x = 2\n");
	}
	if(x <= 1) {
		printf("x = 1\n");
	}

	return 0;
}
