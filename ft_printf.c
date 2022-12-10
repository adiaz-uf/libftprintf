/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-uf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:27:39 by adiaz-uf          #+#    #+#             */
/*   Updated: 2022/10/26 09:34:56 by adiaz-uf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * It takes a character and a va_list, and returns 
 * the number of characters printed
 * 
 * @param c character
 * @param ap This is the va_list that we created in ft_printf.c.
 * 
 * @return The number of characters printed.
 */
int	ft_arg_convert(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar_pf(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr_pf(va_arg(ap, char *)));
	else if (c == 'p')
		return (ft_ptr(va_arg(ap, unsigned long long)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_putnbr_fd_ns(va_arg(ap, unsigned int)));
	else if (c == 'x')
		return (ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if (c == '%')
	{
		write (1, "%%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(char const *primer, ...)
{
	va_list	ap;
	int		i;
	int		r;

	va_start (ap, primer);
	i = 0;
	r = 0;
	while (primer[i])
	{
		if (primer[i] == '%')
		{
			r += ft_arg_convert(primer[i + 1], ap);
			i++;
		}
		else
		{
			write (1, &primer[i], 1);
			r++;
		}
		i++;
	}
	va_end(ap);
	return (r);
}
/*
int main ()
{
	char *h;

	h = NULL;
    printf("%i\n", ft_printf("MI palabra: %s", h));
	printf("%i", printf("PF palabra: %s", h));
    printf("\n");
    printf(" %i\n", ft_printf("MI numero: %X", 0));
	printf(" %i", printf("PF numero: %X", 0));
	printf("\n");
    printf(" %i\n", ft_printf("MI direccion: %p", (void *)-14523));
	printf(" %i", printf("PF direccion: %p", (void *)-14523));
	printf("\n");	
}*/
//return (ft_putstr_pf(ft_itoa_pf(va_arg(ap, int))));
