#include <stdio.h>

int main()
{
	char A;


	while ((A = getchar()) != EOF) {
		if ((A >= 'a') && (A <= 'z')) {
			if (A == 'z')
				A = 'a';
			else
				++A;
		} else {
		A = '*';
		}

	printf("%c", A);
	}
}
