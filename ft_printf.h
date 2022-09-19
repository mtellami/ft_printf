/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:04:19 by mtellami          #+#    #+#             */
/*   Updated: 2022/09/19 23:28:21 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *size);
void	ft_puthex(unsigned long i, char *hex, int *size);
void	ft_putnbr(int nbr, int *size);
void	ft_putnbr_u(unsigned int nbr, int *size);
void	ft_putstr(char *str, int *size);

#endif
