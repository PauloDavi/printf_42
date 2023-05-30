/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:57:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/06/05 02:55:25 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	putnbr(int n, int *len);

int	ft_putnbr(int n, char flag)
{
	int	len;

	len = 0;
	if (n >= 0 && (flag == ' ' || flag == '+'))
		len += ft_putchar(flag);
	putnbr(n, &len);
	return (len);
}

static void	putnbr(int n, int *len)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
		(*len)++;
	}
	if (nbr / 10 > 0)
		putnbr(nbr / 10, len);
	ft_putchar("0123456789"[nbr % 10]);
	(*len)++;
}
