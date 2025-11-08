/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 22:40:09 by ahbich            #+#    #+#             */
/*   Updated: 2025/10/31 11:16:29 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dstc;
	const unsigned char	*srcc;

	if (!dest && !src)
		return (NULL);
	dstc = (unsigned char *)dest;
	srcc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstc[i] = srcc[i];
		i++;
	}
	return (dest);
}
// #include<string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char *buf1 = "HelloWorld";
// 	char buf2[20] = "HelloWorld";

// 	// Normal memcpy (works fine)
// 	//memcpy("abc", "abc", 5);
// 	char	*s = NULL;
// 	printf("%s", (char *)memmove(s, s, 1));

// 	// Our unsafe ft_memcpy
// 	// ft_memcpy(buf2 + 2, buf2, 5);
// 	// printf("ft_memcpy result: %s\n", buf2);

// 	return 0;
// }
