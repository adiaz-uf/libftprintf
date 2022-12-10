/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-uf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:43:53 by adiaz-uf          #+#    #+#             */
/*   Updated: 2022/10/06 09:43:56 by adiaz-uf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <string.h>

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int	base_len;
	int	nb[100];
	int	c;
	int	len;

	c = 0;
	len = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		len += write(1, "-", 1);
	}
	if (nbr == 0)
		len += write(1, "0", 1);
	base_len = strlen(base);
	while (nbr != 0)
	{
		nb[c] = nbr % base_len;
		nbr = nbr / base_len;
		c++;
	}
	while (c-- > 0)
		len += write(1, &base[nb[c]], 1);
	return (len);
}
/*
int main()
{
	printf("%d", ft_putnbr_base((void *)-14523, "0123456789ABCDEF"));
}*/
