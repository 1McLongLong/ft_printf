#include "ft_printf.h"

void	ft_put_addr(unsigned long int nbr, char Xx, int *len)
{
	unsigned long int	base_len;
	char				*base;

	base_len = 16;
	if (Xx == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < base_len)
		ft_putchar(base[nbr % base_len], len);
	else
	{
		ft_put_addr(nbr / base_len, Xx, len);
		ft_put_addr(nbr % base_len, Xx, len);
	}
}

void	ft_print_pointer(void *addr, int *len)
{
	unsigned long int	ptr;

	ptr = (unsigned long int)addr;
	ft_putstr("0x", len);
	ft_put_addr(ptr, 'x', len);
}