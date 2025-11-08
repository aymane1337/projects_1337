/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:55:11 by ahbich            #+#    #+#             */
/*   Updated: 2025/10/31 23:26:08 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	sc;
	int				i;

	sc = (unsigned char)c;
	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == sc)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
// #include <stdio.h>
// int main(void)
// {
//     const char *str = "Hello World!";
//     char target = 'o';
//     char *result;

//     result = ft_strrchr(str, target);

//     if (result)
//         printf("Last '%c' found at position: %ld\n", target, result - str);
//     else
//         printf("Character '%c' not found\n", target);

//     return (0);
// }
