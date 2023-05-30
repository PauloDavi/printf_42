/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:30:16 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/06/05 03:06:11 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>

# define OCTAL_BASE "01234567"
# define DEC_BASE "0123456789"
# define HEX_UP_BASE "0123456789ABCDEF"
# define HEX_LW_BASE "0123456789abcdef"
# define UINT_MAX 0xFFFFFFFF

# define PTR_HEX_L_PREFIX "0x"
# define HEX_U_PREFIX "0X"
# define OCT_PREFIX "0"
# define MINUS '-'
# define PLUS '+'
# define SPACE ' '

int	ft_putstr(const char *str);
int	ft_putchar(const char c);
int	ft_putnbr(int n, char flag);
int	ft_putnbr_base(unsigned long nbr, const char *base, char type, char flag);
int	ft_strlen(const char *str);
int	ft_putpointer(const void *ptr);

int	ft_vprintf(const char *format, va_list ap);
int	print_var(char type, char flag, va_list ap);
int	ft_printf(const char *format, ...);

#endif