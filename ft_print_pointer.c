#include "ft_printf.h"

int ft_print_pointer(void *pointer){
   int printed;
   printed = 0;
   if(!pointer)
      ft_print_str("0x0");
   printed += write(1, "0x", 2);
   return (printed);
}
