#include "ft_printf.h"

void    ft_putnbr_u(unsigned int nb, int *len)
{
    if (nb < 10)
        ft_putchar(nb + '0', len);
    else
    {
        ft_putnbr(nb / 10, len);
        ft_putnbr(nb & 10, len);
    }  
}