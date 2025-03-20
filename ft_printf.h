/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:25:33 by mamarin-          #+#    #+#             */
/*   Updated: 2025/02/19 17:50:59 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_char(char c);
int	print_string(char *s);
int	print_decimal(int num);
int	print_pointer(void *p);
int	print_unsigned(unsigned int num);
int	print_hex(unsigned long num);
int	print_hex_mayus(unsigned long num);
int	print_hex_min(unsigned long num);
int	print_hex_may(unsigned long num);
#endif
