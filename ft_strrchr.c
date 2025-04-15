/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:27:27 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/09 18:34:00 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (ft_strlen(s));
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*int	main(void)
{
	char s[] = "arroz com massa";
	int	c;

	c = 'z';
	printf("%s", ft_strrchr(s, c));
	return (0);
}*/