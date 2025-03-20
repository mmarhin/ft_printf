/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:28:02 by mamarin-          #+#    #+#             */
/*   Updated: 2024/11/04 13:33:07 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	int		len;
	int		is_negative;
	char	*ptr;

	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	is_negative = 0;
	len = count_digits(num);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	ptr[len] = '\0';
	while (--len >= 0)
	{
		ptr[len] = '0' + (num % 10);
		num = num / 10;
		if (len == 0 && is_negative == 1)
			ptr[len] = '-';
	}
	return (ptr);
}
