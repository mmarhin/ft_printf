/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:46:16 by mamarin-          #+#    #+#             */
/*   Updated: 2025/02/19 11:53:26 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
	{
		count = print_unsigned(num / 10);
	}
	write(1, &"0123456789"[num % 10], 1);
	return (count + 1);
}
