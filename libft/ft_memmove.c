/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:10:03 by mamarin-          #+#    #+#             */
/*   Updated: 2024/10/16 20:24:23 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;
	size_t				i;

	i = 0;
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	if ((p_src + num <= p_dest || p_dest < p_src))
	{
		while (i < num)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	else if (p_dest != NULL && p_src != NULL)
	{
		i = num - 1;
		while (i + 1 > 0)
		{
			p_dest[i] = p_src[i];
			i--;
		}
	}
	return (dest);
}
