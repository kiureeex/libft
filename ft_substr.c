/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:07:57 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/22 17:36:10 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*n;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		n = ft_strdup("");
		return (n);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	n = (char *)malloc((len + 1) * sizeof(char));
	if (n == NULL)
		return (NULL);
	ft_memcpy(n, s + start, len);
	n[len] = '\0';
	return (n);
}
/*int	main(void)
{
	char	*s = "TUNGTUNGTUNG, TRALALERO TRALALA, BOMBARDINI GUSINI, XD\n";
	printf("%s\n", ft_substr(s, 3, 15));
	return (0);
}*/