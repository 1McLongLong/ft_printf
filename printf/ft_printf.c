#include "ft_printf.h"

void    find_specifier(const char specifier, va_list args, int *len)
{
    if (specifier == 'c')
        ft_putchar(va_arg(args, int), len);
    else if (specifier == 's')
        ft_putstr(va_arg(args, char *), len);
    else if (specifier == 'd' || specifier == 'i')
        ft_putnbr(va_arg(args, int), len);
    else if (specifier == '%')
        ft_putchar(specifier, len);
    else if (specifier == 'x')
        ft_putnbr_base(va_arg(args, int), specifier, len);
    else if (specifier == 'X')
        ft_putnbr_base(va_arg(args, int), specifier, len);
    else if (specifier == 'u')
        ft_putnbr_u(va_arg(args, unsigned int), len);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int len;

    len = 0;
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
            find_specifier(*(++format), args, &len);
        else
            ft_putchar(*format, &len);
        format++;  
    }
    va_end(args);
    return (len);
}
