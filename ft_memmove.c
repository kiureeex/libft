/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:28:53 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/10 19:06:23 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*c1;
	unsigned char		*c2;

	c1 = (unsigned char *)dest;
	c2 = (unsigned char *)src;
	if (dest < src)
		ft_memcpy(dest, src, n);
	if (dest > src)
	{
		while (n > 0)
		{
			c1[n - 1] = c2[n - 1];
			n--;
		}
	}
	return (dest);
}
/*int	main(void)
{
	char	dest[30] = "timoes";
	const char	src[15] = "ola pessoas";
	ft_memmove(dest, src, 8);
	printf("%s\n", dest);
	return (0);
}*/