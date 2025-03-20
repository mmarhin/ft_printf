/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:20:42 by mamarin-          #+#    #+#             */
/*   Updated: 2024/10/16 20:38:11 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t num)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (num > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		num--;
	}
	return (s);
}
