# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int     ft_printf(const char *format, ...);
void    ft_putchar(char c, int *len);
void    ft_putstr(char *str, int *len);
void    ft_putnbr(int nb, int *len);
void    ft_putnbr_base(unsigned int nbr, char format, int *len);
void    ft_putnbr_u(unsigned int nb, int *len);

# endif