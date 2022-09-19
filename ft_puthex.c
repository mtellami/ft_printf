/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:04:20 by mtellami          #+#    #+#             */
/*   Updated: 2022/09/19 20:02:53 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long i, char *hex, int *size)
{
	if (i > 255)
	{
		ft_puthex((i / 16), hex, size);
		ft_putchar(hex[i % 16], size);
	}
	else
	{
		if (i >= 16)
		{
			ft_putchar(hex[i / 16], size);
			ft_putchar(hex[i % 16], size);
		}
		else
			ft_putchar(hex[i % 16], size);
	}
}
