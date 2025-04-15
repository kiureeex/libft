/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:22:57 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/15 16:07:34 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	malloc_size;
	size_t	i;
	size_t	h;

	malloc_size = ((ft_strlen(s1) + ft_strlen(s2) + 1));
	str = ft_calloc(sizeof(char), malloc_size);
	if (str == NULL)
		return (NULL);
	i = 0;
	h = 0;
	while (i < (ft_strlen((const char *)s1)))
	{
		str[i] = s1[i];
		i++;
	}
	while (h < (malloc_size - 1))
	{
		str[i] = s2[h];
		i++;
		h++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "tung tung tung tung";
	s2 = "sahur";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/