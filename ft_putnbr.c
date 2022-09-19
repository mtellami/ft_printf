/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:35:55 by mtellami          #+#    #+#             */
/*   Updated: 2022/09/19 21:54:09 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *size)
{
	unsigned int	n;

	n = nbr;
	if (nbr < 0)
	{
		ft_putchar('-', size);
		n *= -1;
	}
	if (n < 10)
		ft_putchar(n + '0', size);
	else
	{
		ft_putnbr(n / 10, size);
		ft_putnbr(n % 10, size);
	}
}
