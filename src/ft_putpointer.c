/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:12:14 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/06/23 21:23:58 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(const void *ptr, t_element element)
{
	if (ptr == NULL)
	{
		element.precision = -1;
		return (ft_putstr(NULL_PTR, element));
	}
	element.flags |= HASH_FLAG_MASK;
	return (ft_putnbr_base((unsigned long)ptr, HEX_LW_BASE, element));
}
