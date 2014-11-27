/* Ошибки:
Не присвоен 0 к переменной i;
*/

#include <stdio.h>

int main(void)
{
	int i = 0;

	while(i < 10) {
		printf("%d -ый раз\n", i + 1);
		i++;
	}
	return 0;
}
