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
	scanf("%d", x);
	if(x >= 2) {
		printf("%d", x = 2);
	}
	if(x <= 1) {
		printf("%d", x = 1);
	} else {
	printf("%d\n", x);
	}

	return 0;
}
