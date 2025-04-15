/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:29:50 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/15 17:56:47 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void ft_toupper_iter(unsigned int i, char *c)
{
	(void)i;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;  // Convert to uppercase
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*int main(void)
{
    char s[] = "TUngTUNgSAHUR";  // Mutable string
    ft_striteri(s, ft_toupper_iter);  // Pass the correct function
    printf("%s\n", s);  // Output the modified string
    return 0;
}*/