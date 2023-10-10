#include "ft_printf.h"

void    ft_putnbr_base(unsigned  int nbr, char format, int *len)
{
    unsigned int    base_len;
    char    *base;

    base_len = 16;
    if (format == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";
    
    if (nbr < base_len)
        ft_putchar(base[nbr], len);
    else
    {
        ft_putnbr_base(nbr / base_len, format, len);
        ft_putnbr_base(nbr % base_len, format, len);
    }
}