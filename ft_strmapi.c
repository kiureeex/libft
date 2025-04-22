/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:41:33 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/22 17:08:48 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	ft_strtemp(unsigned int c, char s)
{
	(void)c;
	write(1, &s, 1);
	return (s);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new;

	i = 0;
	if (s == NULL)
		return (NULL);
	new = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*int	main(void)
{
	char	s[] = "tungtungtung SAHUUUUR";
	ft_strmapi(s, ft_strtemp);
	return (0);
}*/