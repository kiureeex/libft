/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:45:27 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/16 18:08:24 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	count_numbers(int n)
{
	int		len;
	long	nbr;

	nbr = n;
	len = 0;
	if (nbr == 0)
		len = 1;
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	nbr;

	nbr = n;
	len = count_numbers(n);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr = nbr * (-1);
	}
	if (nbr == 0)
	{
		s[0] = '0';
	}
	while (nbr > 0)
	{
		s[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (s);
}
/*int	main(void)
{
	int	n;

	n = 0;
	printf("%s", ft_itoa(n));
	return (0);
}*/
