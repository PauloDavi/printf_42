/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 04:05:39 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/06/22 02:40:22 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_atoi(const char **nptr)
{
	int	number;

	number = 0;
	while (ft_isdigit(**nptr))
		number = (number * 10) + (*(*nptr)++ - '0');
	return (number);
}
