/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:24:01 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/07 23:36:22 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	if (size <= dlen)
		return (slen + size);
	while (src[i] && dlen + i < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
// #include<bsd/string.h>
// #include<stdio.h>
// int main()
// {
// 	char dst[10] = "amine";
// 	char src[3] = "ami";
// 	printf("%zu\n",ft_strlcat(dst,src,12));
// }
// while (src[i] && i < size - dlen - 1)
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char dst1[20] = "Hello";
// 	char dst2[20] = "Hello";
// 	const char *src = " World!";
// 	size_t size = sizeof(dst1);

// 	// Using original strlcat
// 	size_t ret_original = strlcat(dst1, src, size);
// 	printf("Original strlcat:\n");
// 	printf("Result string: '%s'\n", dst1);
// 	printf("Return value: %zu\n\n", ret_original);

// 	// Using custom ft_strlcat
// 	size_t ret_custom = ft_strlcat(dst2, src, size);
// 	printf("Custom ft_strlcat:\n");
// 	printf("Result string: '%s'\n", dst2);
// 	printf("Return value: %zu\n", ret_custom);

// 	return 0;
// }
