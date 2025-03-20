/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:22:56 by mamarin-          #+#    #+#             */
/*   Updated: 2024/10/23 15:43:47 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s);
	ptr = malloc((sizeof(char) * len) + 1);
	if (ptr != NULL)
	{
		ft_memcpy(ptr, s, len);
		*(ptr + len) = '\0';
	}
	return (ptr);
}
