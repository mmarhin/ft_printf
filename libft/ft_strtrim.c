/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:18:00 by mamarin-          #+#    #+#             */
/*   Updated: 2024/10/24 21:06:52 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	j = 0;
	while (ft_strchr(set, s1[j]) && s1[j] != '\0')
		j++;
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && i > 0 && s1[i] != '\0')
		i--;
	return (ft_substr(s1, j, i - j + 1));
}
