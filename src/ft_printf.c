/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:37:02 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/06/05 07:18:59 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	if (format == NULL)
		return (0);
	va_start(ap, format);
	len = ft_vprintf(format, ap);
	va_end(ap);
	return (len);
}

int	ft_vprintf(const char *format, va_list ap)
{
	int	len;

	len = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '#' || *format == ' ' || *format == '+'
				|| *format == '-' || *format == '0' || *format == '.')
				format++;
			len += print_var(*format, *(format - 1), ap);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	return (len);
}

int	print_var(char type, char flag, va_list ap)
{
	int	len;

	len = 0;
	if (type == 'i' || type == 'd')
		len = ft_putnbr(va_arg(ap, int), flag);
	else if (type == 's')
		len = ft_putstr(va_arg(ap, char *));
	else if (type == 'x')
		len = ft_putnbr_base(va_arg(ap, unsigned int), HEX_LW_BASE, type, flag);
	else if (type == 'X')
		len = ft_putnbr_base(va_arg(ap, unsigned int), HEX_UP_BASE, type, flag);
	else if (type == 'o')
		len = ft_putnbr_base(va_arg(ap, unsigned int), OCTAL_BASE, type, flag);
	else if (type == 'u')
		len = ft_putnbr_base(va_arg(ap, unsigned int), DEC_BASE, type, flag);
	else if (type == 'p')
		len = ft_putpointer(va_arg(ap, void *));
	else if (type == 'c')
		len = ft_putchar((unsigned char)va_arg(ap, int));
	else if (type == '%')
		len = ft_putchar(type);
	return (len);
}
