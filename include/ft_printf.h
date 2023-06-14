/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:30:16 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/06/24 06:28:38 by vscode           ###   ########.fr       */
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
# define NULL_STR "(null)"
# define NULL_PTR "(nil)"

# define HEX_L_PREFIX "0x"
# define HEX_U_PREFIX "0X"
# define OCT_PREFIX "0"

# define MINUS_FLAG_MASK 0b000001
# define ZERO_FLAG_MASK 0b000010
# define PLUS_FLAG_MASK 0b000100
# define SPACE_FLAG_MASK 0b001000
# define HASH_FLAG_MASK 0b010000

typedef struct s_element
{
	unsigned char	flags;
	int				width;
	int				precision;
	char			type;
}					t_element;

int					ft_putstr(const char *str, t_element element);
int					ft_putchar(const char c, t_element element);
int					ft_putnbr(int n, t_element element);
int					ft_putnbr_base(unsigned long nbr, const char *base,
						t_element element);
int					ft_strlen(const char *str);
int					ft_putpointer(const void *ptr, t_element element);
int					ft_isdigit(char c);
int					ft_isflag(char c);
int					ft_istype(char c);
unsigned char		ft_get_flag(char c);
int					ft_atoi(const char **nptr);
void				ft_print_spaces(int spaces, char c);
void				ft_strcpy(char *dest, char *source, int len);
int					ft_printnbr(char *str_n, int len, t_element element);
int					ft_printf(const char *format, ...);

#endif