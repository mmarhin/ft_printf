/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:59:59 by mamarin-          #+#    #+#             */
/*   Updated: 2024/10/24 11:46:38 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (size > 0 && nmemb > 0)
	{
		res = malloc(nmemb * size);
		if (res != NULL)
			ft_memset(res, 0, nmemb * size);
	}
	else
		return (malloc(0));
	return (res);
}
