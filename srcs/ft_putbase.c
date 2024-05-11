/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:27:25 by hitran            #+#    #+#             */
/*   Updated: 2024/05/03 14:15:02 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"

int	ft_putbase(unsigned long nb, char *base)
{
	unsigned int	len;
	unsigned int	baselen;
	int				check;

	len = 0;
	check = 0;
	baselen = ft_strlen(base);
	if (nb >= baselen)
	{
		check = ft_putbase(nb / baselen, base);
		if (check == -1)
			return (-1);
		else
			len += check;
	}
	if (ft_putchar(*(base + (nb % baselen))) == -1)
		return (-1);
	return (++len);
}
