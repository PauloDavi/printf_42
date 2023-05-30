/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:12:14 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/06/05 03:07:55 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(const void *ptr)
{
	int	len;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len = 2;
	write(1, "0x", 2);
	len += ft_putnbr_base((unsigned long)ptr, HEX_LW_BASE, 'p', '%');
	return (len);
}
