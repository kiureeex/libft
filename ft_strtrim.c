/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:38:24 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/14 15:38:24 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;
	int		j;
	int		h;

	if (s1 == NULL || set == NULL)
		return (NULL);
	h = ft_strlen((char *)s1) - 1;
	j = 0;
	while (s1[j] && ft_strchr(set, s1[j]))
		j++;
	while (h > j && ft_strrchr(set, s1[h]))
		h--;
	i = 0;
	str = (char *)malloc(((h - j) + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (j <= h)
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "---hello---";
	set = "-";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}