/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:08:22 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/10 19:40:32 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*c1;
	const unsigned char	*c2;
	size_t				i;

	i = 0;
	c1 = (unsigned char *)dest;
	c2 = (unsigned char *)src;
	while (i < n)
	{
		c1[i] = c2[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[10] = "maaaa";
	char	src[] = "ola pessoas";
	ft_memcpy(dest, src, 20);
	printf("%s\n", dest);
	return (0);
}*/