/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-uf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:48:22 by adiaz-uf          #+#    #+#             */
/*   Updated: 2022/10/13 08:49:26 by adiaz-uf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_ptr(unsigned long long ptr)
{
	int		r;

	r = 0;
	r += write (1, "0x", 2);
	if (ptr == 0)
		r += write (1, "0", 1);
	else if (ptr == 18446744073709551615ULL)
		r += write (1, "ffffffffffffffff", 16);
	else if (ptr == 4294967295L)
		r += write (1, "ffffffff", 8);
	else
		r += ft_putnbr_base(ptr, "0123456789abcdef");
	return (r);
}
/*
int main()
{
    char *s = "hola";
    printf("%p\n", s);
    ft_ptr(s);   
}*/
