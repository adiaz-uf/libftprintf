/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_ns.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-uf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:43:09 by adiaz-uf          #+#    #+#             */
/*   Updated: 2022/10/18 12:24:39 by adiaz-uf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * It prints the number n without sign to the standard output.
 * 
 * @param n the number to be printed
 * 
 */
int	ft_putnbr_fd_ns(unsigned int n)
{
	int	cont;

	cont = 0;
	if (n <= 2147483647 || n >= 0)
	{
		if (n < 9)
			cont += ft_putchar_pf(n + '0');
		else if (n > 9)
		{
			cont += ft_putnbr(n / 10);
			cont += ft_putnbr(n % 10);
		}
		else
			cont += ft_putchar_pf(n + '0');
	}
	return (cont);
}
