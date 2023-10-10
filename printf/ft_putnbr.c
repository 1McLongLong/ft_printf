#include "ft_printf.h"

void    ft_putnbr(int nb, int *len)
{
    long    n;

    n = nb;
    if (n < 0)
    {
        ft_putchar('-', len);
        n = -n;
    }
    if (n < 10)
        ft_putchar(n + '0', len);
    else
    {
        ft_putnbr(n / 10, len);
        ft_putnbr(n % 10, len);
    }
}