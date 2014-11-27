/* Ошибки:
Описание int y должно быть рядом с int x = 12;
Лишние пустые строки в printf;
*/

#include <stdio.h>

int main(void)
{
	int x = 12;
	int y;

	printf("x = %d\n", x);
	y = 2 * x;
	printf("y = %d\n", y);

	return 0;
}
