/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:21:01 by mamarin-          #+#    #+#             */
/*   Updated: 2025/02/19 17:59:00 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long num)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (num >= 16)
	{
		count = print_hex(num / 16);
	}
	write(1, &hex[num % 16], 1);
	return (count + 1);
}

int	print_hex_min(unsigned long num)
{
	int	count;

	count = 0;
	count += print_hex(num);
	return (count);
}

int	print_hex_mayus(unsigned long num)
{
	int		count;
	char	*hex;

	hex = "0123456789ABCDEF";
	count = 0;
	if (num >= 16)
	{
		count = print_hex_mayus(num / 16);
	}
	write(1, &hex[num % 16], 1);
	return (count + 1);
}

int	print_hex_may(unsigned long num)
{
	int	count;

	count = 0;
	count += print_hex_mayus(num);
	return (count);
}

int	print_pointer(void *p)
{
	int	count;

	count = 0;
	if (!p)
	{
		write(1, "(nil)", 5);
		count = 5;
	}
	else
	{
		write(1, "0x", 2);
		count = 2;
		count += print_hex((unsigned long)p);
	}
	return (count);
}
