/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:26:58 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/17 19:34:39 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	n_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if ((s[i] != c) && s[i])
			count++;
		while ((s[i] != c) && s[i])
			i++;
	}
	return (count);
}

int	len_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		count++;
	}
	return (count);
}

char	*makeword(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (len_word(s, c) + 1));
	if (word == NULL)
		return (NULL);
	while (s[i] != c && s[i])
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**free_data(char **split, int i)
{
	while (i--)
		free(split[i]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		h;
	int		count_words;
	char	**news;

	if (s == NULL)
		return (NULL);
	h = 0;
	i = -1;
	count_words = n_count_words(s, c);
	news = malloc(sizeof(char *) * (count_words + 1));
	if (news == NULL)
		return (NULL);
	while (++i < count_words)
	{
		while (s[h] == c)
			h++;
		news[i] = makeword(s + h, c);
		if (!news[i])
			return (free_data(news, i));
		h += len_word(s + h, c);
	}
	news[i] = NULL;
	return (news);
}
