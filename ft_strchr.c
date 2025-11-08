/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:29:10 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/06 10:05:44 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	sc;
	int				i;

	i = 0;
	sc = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == sc)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == sc)
		return ((char *)(s + i));
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *test = "abcdefgh";

// 	// normal valid case compare
// 	printf("orig  strchr: %s\n", strchr(test, 'd'));
// 	printf("mine  strchr: %s\n", ft_strchr(test, 'd'));

// 	printf("orig  strchr not found: %s\n", strchr(test, 'z'));
// 	printf("mine  strchr not found: %s\n", ft_strchr(test, 'z'));

// 	// NULL cases
// 	printf("\n-------- NULL case test --------\n");

// 	// mine should NOT crash
// 	printf("mine NULL: %p\n", ft_strchr(NULL, 'a'));

// 	// original will segfault here so comment until run separate
// 	// printf("orig NULL: %p\n", strchr(NULL, 'a'));

// 	return 0;
// }