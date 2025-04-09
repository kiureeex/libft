/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:56:12 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/09 11:03:30 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (*s1 || *s2))
	{
		if (!(*s1 == *s2))
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char s1[] = "alou meu amigo";
	char s2[] = "alou meu amign";
	int	n = 20;

	printf("%d\n", ft_strncmp(s1, s2, n));
}*/