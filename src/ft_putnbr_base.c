/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:52:02 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/06/05 02:58:49 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_len(unsigned long nb, const char *base, int base_len,
				int *len);

int	ft_putnbr_base(unsigned long nbr, const char *base, char type, char flag)
{
	int	base_len;
	int	len;

	len = 0;
	base_len = ft_strlen(base);
	if (nbr != 0 && flag == '#')
	{
		if (type == 'x')
			len += ft_putstr("0x");
		else if (type == 'o')
			len += ft_putstr("0");
		else if (type == 'X')
			len += ft_putstr("0X");
	}
	ft_putnbr_len(nbr, base, base_len, &len);
	return (len);
}

static void	ft_putnbr_len(unsigned long nbr, const char *base, int base_len,
		int *len)
{
	if (nbr / base_len > 0)
		ft_putnbr_len(nbr / base_len, base, base_len, len);
	(*len)++;
	write(1, &base[nbr % base_len], 1);
}
