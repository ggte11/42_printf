/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:25:24 by mcardoso          #+#    #+#             */
/*   Updated: 2025/05/01 18:22:51 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_printstr(const char *str);
int		ft_putnbr(long	nbr);
int		ft_printf(const char *, ...);


#endif