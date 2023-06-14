/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:44:50 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/06/24 06:19:42 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isflag(char c)
{
	if (c == '-' || c == '0' || c == '*' || c == '#' || c == ' ' || c == '+')
		return (1);
	return (0);
}

int	ft_istype(char c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u' || c == 'x'
		|| c == 'o' || c == 'X' || c == 'p' || c == '%')
		return (1);
	return (0);
}

unsigned char	ft_get_flag(char c)
{
	if (c == '-')
		return (MINUS_FLAG_MASK);
	if (c == '0')
		return (ZERO_FLAG_MASK);
	if (c == ' ')
		return (SPACE_FLAG_MASK);
	if (c == '+')
		return (PLUS_FLAG_MASK);
	return (HASH_FLAG_MASK);
}

void	ft_print_spaces(int spaces, char c)
{
	while (spaces--)
		write(1, &c, 1);
}
