/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-uf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:29:12 by adiaz-uf          #+#    #+#             */
/*   Updated: 2022/10/18 12:29:14 by adiaz-uf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	cont;

	cont = 0;
	if (n > -2147483648 || n <= 2147483647)
	{
		if (n == -2147483648)
		{
			cont += ft_putstr_pf("-2");
			cont += ft_putnbr(147483648);
		}
		else if (n >= 10)
		{
			cont += ft_putnbr(n / 10);
			cont += ft_putnbr(n % 10);
		}
		else if (n < 0)
		{
			n = -n;
			cont += ft_putchar_pf('-');
			cont += ft_putnbr(n);
		}
		else
			cont += ft_putchar_pf(n + '0');
	}
	return (cont);
}
