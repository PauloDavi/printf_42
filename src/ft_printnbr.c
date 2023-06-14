/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:21:24 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/06/24 06:28:31 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(char *str_n, int len, t_element element)
{
	int	spaces;

	spaces = element.width - len;
	if (spaces > 0)
	{
		if (!(element.flags & MINUS_FLAG_MASK))
			ft_print_spaces(spaces, ' ');
		while (*str_n != '\0')
			write(1, str_n++, 1);
		if (element.flags & MINUS_FLAG_MASK)
			ft_print_spaces(spaces, ' ');
		return (element.width);
	}
	while (*str_n != '\0')
		write(1, str_n++, 1);
	return (len);
}
