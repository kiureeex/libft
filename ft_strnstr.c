/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:53:02 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/15 15:13:37 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(little);
	if (j == '\0')
		return ((char *)big);
	while (big[i] && i < len && i + j <= len)
	{
		if (ft_strncmp(&big[i], little, j) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char big[] = "alou meus caros amigos";
	char little[] = "meu";
	int	len = 15;

	printf("%s\n", ft_strnstr(big, little, len));
	return (0);
}*/