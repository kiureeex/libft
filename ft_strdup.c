/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:53:45 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/11 16:11:38 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		h;
	char	*dest;

	i = 0;
	h = 0;
	while (s[i] != '\0')
		i++;
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (s[h] != '\0')
	{
		dest[h] = s[h];
		h++;
	}
	dest[h] = '\0';
	return (dest);
}
/*int	main(void)
{
	const char	*s;
	s = "amigoooos";
	printf("%s", s);
}*/