#include <stdio.h>

int main()
{
	char in_char;


	while ((in_char = getchar()) != EOF) {
		if ((in_char >= 'a') && (in_char <= 'z')) {
			if (in_char == 'z')
				in_char = 'a';
			else
				++in_char;
		} else {
		in_char = '*';
		}

	printf("%c", in_char);
	}
}
