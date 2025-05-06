/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sources.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:22:14 by mcardoso          #+#    #+#             */
/*   Updated: 2025/05/05 16:44:57 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_printstr(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (ft_printstr("(null)"));
	while (str[i])
		ft_putchar(str[i++]);
	return (i);
}

int	ft_putnbr(long nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		i += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		i += ft_putnbr(nbr / 10);
		i += ft_putnbr(nbr % 10);
	}
	else
		i += ft_putchar(nbr + '0');
	return (i);
}

int	ft_printhexa(unsigned int n, char c)
{
	int				i;
	unsigned int	base;
	char			*set;

	i = 0;
	base = 16;
	if (c == 'x')
		set = "0123456789abcdef";
	else
		set = "0123456789ABCDEF";
	if (n >= base)
		i += ft_printhexa(n / base, c);
	i += ft_putchar(set[n % base]);
	return (i);
}

int	ft_printpointer(void *ptr, unsigned long long base, int loopstop)
{
	int					i;
	unsigned long long	mem_adr;
	char				*set;

	i = 0;
	set = "0123456789abcdef";
	mem_adr = (unsigned long long)ptr;
	if (!ptr && !loopstop)
		return (write(1, "(nil)", 5));
	if (loopstop++ == 0)
		i += write(1, "0x", 2);
	if (mem_adr >= base)
		i += ft_printpointer((void *)(mem_adr / base), base, loopstop);
	i += ft_putchar((set[mem_adr % base]));
	return (i);
}
