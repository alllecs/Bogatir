#include <stdio.h>

int main()
{
	char in_char;


	while ((in_char = getchar()) != EOF) {
		if ((in_char >= 'A') && (in_char <= 'Z')) {
			if (in_char == 'Z')
				in_char = 'A';
			else
				++in_char;
		} else {
		in_char = '*';
		}

	printf("%c", in_char);
	}
}

