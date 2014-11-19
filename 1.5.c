/*
Не хватает #include <stdio.h>, main, return;
Лишний then;
Не хватает "("x < 1")";
*/

#include <stdio.h>

int main(void)
{
	int x;

	if(x > 2) {
		printf("%d", x = 2);
	}

	if(x < 1) {
		printf("%d", x = 1);
	}
	return 0;
}
