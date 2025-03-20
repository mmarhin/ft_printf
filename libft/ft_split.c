/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:47:00 by mamarin-          #+#    #+#             */
/*   Updated: 2024/10/31 21:12:08 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **strs, int i)
{
	while (i >= 0)
		free(strs[i--]);
	free(strs);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*copy_word(const char *start_word, int len_word)
{
	char	*ptr;
	char	*aux;

	ptr = malloc(sizeof(char) * (len_word + 1));
	aux = ptr;
	if (!ptr)
		return (NULL);
	while (len_word--)
		*ptr++ = *start_word++;
	*ptr = '\0';
	return (aux);
}

static const char	*find_word(const char *s, char c, int *len_word)
{
	*len_word = 0;
	while (*s && *s == c)
		s++;
	while (s[*len_word] && s[*len_word] != c)
		(*len_word)++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char		**strs;
	int			i;
	int			len_word;
	const char	*start_word;

	i = 0;
	strs = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	while (*s)
	{
		start_word = find_word(s, c, &len_word);
		s = start_word + len_word;
		if (len_word > 0)
		{
			strs[i] = copy_word(start_word, len_word);
			if (!strs[i++])
				return (free_all(strs, i - 2), NULL);
		}
	}
	strs[i] = NULL;
	return (strs);
}
