#include <stdio.h>

void main_puts(void)
{
        char string[] = "Путин. Кремль. Москва.";
        puts(string);
}

void main_printf(void)
{
        printf("Путин.");
        printf("Кремль.");
        printf("Москва.");
}

int main(void)
{
main_puts();
main_printf();
}
