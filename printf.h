/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:25:24 by mcardoso          #+#    #+#             */
/*   Updated: 2025/05/05 16:43:09 by mcardoso         ###   ########.fr       */
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
int		ft_putnbr(long nbr);
int		ft_printhexa(unsigned int n, char c);
int		ft_printpointer(void *ptr, unsigned long long base, int loopstop);
int		ft_printf(const char *str, ...);

#endif