/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-uf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:28:37 by adiaz-uf          #+#    #+#             */
/*   Updated: 2022/10/06 09:44:43 by adiaz-uf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Ft_putchar_fd() writes a character to a file descriptor
 * 
 * @param c the character to print
 * 
 * @return The number of bytes written.
 */
int	ft_putchar_pf(char c)
{
	write (1, &c, 1);
	return (1);
}
