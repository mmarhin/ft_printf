/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:50:49 by mamarin-          #+#    #+#             */
/*   Updated: 2025/02/18 13:58:36 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_decimal(int num)
{
	int		count;
	char	*p;

	p = ft_itoa(num);
	if (!p)
		return (0);
	count = print_string(p);
	free(p);
	return (count);
}
