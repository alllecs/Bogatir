#include <stdio.h>

void main_puts(void)
{
        char string[] = "Владимир. Кремль. Москва.";
        puts(string);
}

void main_printf(void)
{
        printf("Путин\n");
        printf("Кремль\n");
        printf("Москва\n");
        return 0;
}

int main(void)
{
main_puts();
main_printf();
}
