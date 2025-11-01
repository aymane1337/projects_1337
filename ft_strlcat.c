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
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;

	if (dst == NULL && size == 0)
		return (slen);
	if (dlen == size)
		return (slen + dlen);
	while (src[i] && i < dlen - size - 1)
	{
		dst[dlen] = src[i];
		dlen++;
		i++;
	}
	dst[dlen] = '\0';
	return (dlen + slen);
}

int   main()
{
        char *src = "efgh";
        char dest[10] = "abcd";
        ft_strlcat(dest, src, 10);
        //printf("%d", ft_strlcpy(dest, src, 4));
        printf("%s", dest);
        return (0);
}

