/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:20:25 by hitran            #+#    #+#             */
/*   Updated: 2024/05/03 14:10:53 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *str, ...);
int	ft_putbase(unsigned long nb, char *base);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putaddr(void *ptr);
int	ft_putnbr(int n);
int	ft_putuint(unsigned int n);
int	ft_puthexa(unsigned int n, char c);

#endif