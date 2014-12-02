#include <stdio.h>

int is_lower_latin(char symbol)
{
	if ((symbol >= 'a') && (symbol <= 'z'))
		return 2;
	else
		return 0;
}

char rotate_forward(char symbol)
{
	if (symbol == 'z')
		return 'a';
	else
		return ++symbol;
}

int main()
{
	char in_char;


	while ((in_char = getchar()) != EOF) {
		if (is_lower_latin(in_char))
			in_char = rotate_forward(in_char);
		else {
		in_char = '*';
		}

	printf("%c", in_char);
	}
	return 0;
}
