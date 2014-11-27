/* Ошибки:
int вынесен за main()
Присвоение n = 12, должно выполняться в int n
Лишние пробелы в printf
*/

#include <stdio.h>

int main(void)
{
	int n =12;
	int y;

	y = n + 2;
	printf("y = %d\n", y);

	return 0;
}
