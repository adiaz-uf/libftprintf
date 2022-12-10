/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-uf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:46:00 by adiaz-uf          #+#    #+#             */
/*   Updated: 2022/10/18 12:26:18 by adiaz-uf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *primer, ...);
int		ft_putchar_pf(char c);
int		ft_putnbr_fd_ns(unsigned int n);
int		ft_putstr_pf(char *s);
int		ft_putnbr_base(unsigned long nbr, char *base);
int		ft_ptr(unsigned long long ptr);
size_t	ft_strlen(const char *str);
int		ft_putnbr(int n);

#endif
