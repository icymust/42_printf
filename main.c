#include "ft_printf.h"

#include <stdio.h>
int main(void){
    ft_printf("Char: %c\n", 'A');
    ft_printf("NULL %s NULL \n", NULL);
    ft_printf("Null str: %s\n", (char *)NULL);
    ft_printf(" %p \n", (void *)1);
    printf(" %p \n", (void *)1);

    printf("NUM check\n");
    ft_printf("%i\n", 1234);
    printf("%i\n", 1234);
}