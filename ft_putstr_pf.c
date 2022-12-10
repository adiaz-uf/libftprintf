/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-uf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:42:29 by adiaz-uf          #+#    #+#             */
/*   Updated: 2022/10/18 12:25:08 by adiaz-uf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * Ft_putstr_pf() takes a string and prints it to the standard output
 * 
 * @param s The string to be printed.
 * 
 */
int	ft_putstr_pf(char *s)
{
	int	i;
	int	size;

	i = 0;
	if (!s)
		return (write (1, "(null)", 6));
	size = ft_strlen(s);
	while (size > i)
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}
