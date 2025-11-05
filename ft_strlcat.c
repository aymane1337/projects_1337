/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:24:01 by ahbich            #+#    #+#             */
/*   Updated: 2025/10/31 18:47:58 by ahbich           ###   ########.fr       */
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
	// while (src[i] && i < size - dlen - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
#include <stdio.h>
#include <string.h>
int main(void)
{
    const char *src = "World!";
    size_t ret;

    // Case 1: NULL destination with size 0 (only for ft_strlcat)
    // ret = ft_strlcat(NULL, src, 0);
    // printf("ft_strlcat (NULL dst, size 0): returned: %zu\n", ret);

    // Case 2: Valid destination but size 0
    char buf1[20] = "Hello";
    char buf2[20] = "Hello";

    // ret = strlcat(buf1, src, 1);
    ret = ft_strlcat(buf1, src, 11);
    printf("returned: %zu\n", ret);
    printf("returned: %s\n", buf1);

    return 0;
}