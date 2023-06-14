/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:21:24 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/06/23 21:25:32 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(const char c, t_element element)
{
	int	spaces;

	spaces = element.width - 1;
	if (spaces > 0)
	{
		if (!(element.flags & MINUS_FLAG_MASK))
			ft_print_spaces(spaces, ' ');
		else if (element.flags & ZERO_FLAG_MASK)
			ft_print_spaces(spaces, '0');
		write(1, &c, 1);
		if (element.flags & MINUS_FLAG_MASK)
			ft_print_spaces(spaces, ' ');
		return (element.width);
	}
	return (write(1, &c, 1));
}
