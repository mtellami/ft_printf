/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 23:20:24 by mtellami          #+#    #+#             */
/*   Updated: 2022/09/19 23:25:33 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nbr, int *size)
{
	if (nbr < 10)
		ft_putchar(nbr + '0', size);
	else
	{
		ft_putnbr(nbr / 10, size);
		ft_putnbr(nbr % 10, size);
	}
}
