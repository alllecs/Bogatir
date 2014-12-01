#include <stdio.h>

int main()
{
	char A;


	while ((A = getchar()) != EOF) {
		if ((A >= 'A') && (A <= 'Z')) {
			if (A == 'Z')
				A = 'A';
			else
				++A;
		} else {
		A = '*';
		}

	printf("%c", A);
	}
}

