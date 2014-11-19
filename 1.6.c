#include <stdio.h>

void main_puts(void)
{
        puts("Путин.\nКремль.\nМосква.\n");
}
void main_printf(void)
{
        printf("Путин.\n");
        printf("Кремль.\n");
        printf("Москва.\n");
}
int main(void)
{
main_puts();
main_printf();
return 0;
}
