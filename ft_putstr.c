/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:32:28 by mtellami          #+#    #+#             */
/*   Updated: 2022/09/19 20:02:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *size)
{
	if (str == NULL)
		ft_putstr("null", size);
	while (*str)
	{
		ft_putchar(*str, size);
		str++;
	}
}
