/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorces.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:22:14 by mcardoso          #+#    #+#             */
/*   Updated: 2025/05/01 20:01:37 by mcardoso         ###   ########.fr       */
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
	if (!str[i])
		return (ft_printstr("(null)"));
	while (str[i])
		ft_putchar(str[i++]);
	return(i);
}
int	ft_putnbr(long	nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		i += ft_putchar('-');
		nbr = -nbr;
	}
	else if (nbr > 9)
	{
		i += ft_putnbr(nbr / 10);
		i += ft_putnbr(nbr % 10);
	}
	else
		i += ft_putnbr(nbr + '0');
	return (i);
}
// int	ft_printhexa(unsigned int n, unsigned long base, char *symb)
// {
// 	int	i;

	
// }