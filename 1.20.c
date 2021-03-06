#include <stdio.h>

int is_higher_latin(char symbol)
{
	if ((symbol >= 'A') && (symbol <= 'Z'))
		return 1;

		return 0;
}

char rotate_forward(char symbol)
{
	if (symbol == 'Z')
		return 'A';

		return symbol + 1;
}

int main()
{
	char in_char;


	while ((in_char = getchar()) != EOF) {
		if (is_higher_latin(in_char))
			in_char = rotate_forward(in_char);
		else {
		in_char = '*';
		}

	printf("%c", in_char);
	}
	return 0;
}

