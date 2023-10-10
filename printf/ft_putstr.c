#include "ft_printf.h"

void ft_putstr(char *str, int *len)
{
    if (str == NULL)
      ft_putstr("(null)", len);
    while (*str)
    {
        ft_putchar(*str, len);
        str++;
    }
}