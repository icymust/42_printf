#include "ft_printf.c"

int main(void){
    ft_printf("Char: %c\n", 'A');
    ft_printf("Str: %s\n", "Hello");
    ft_printf("Null str: %s\n", (char *)NULL);
}