/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:23:20 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/06/24 06:37:10 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putstr_space(const char *str, int len, int s, t_element element);

int	ft_putstr(const char *str, t_element element)
{
	int			len;
	int			spaces;
	const char	*s;

	s = str;
	if (str == NULL)
	{
		if (element.precision != -1 && element.precision < 6)
			s = "";
		else
			s = NULL_STR;
	}
	len = ft_strlen(s);
	if (element.precision != -1 && element.precision < len)
		len = element.precision;
	spaces = element.width - len;
	if (spaces > 0)
		return (ft_putstr_space(s, len, spaces, element));
	write(1, s, len);
	return (len);
}

static int	ft_putstr_space(const char *str, int len, int s, t_element element)
{
	if (!(element.flags & MINUS_FLAG_MASK))
		ft_print_spaces(s, ' ');
	write(1, str, len);
	if (element.flags & MINUS_FLAG_MASK)
		ft_print_spaces(s, ' ');
	return (element.width);
}
