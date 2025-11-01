/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:19:56 by ahbich            #+#    #+#             */
/*   Updated: 2025/10/31 16:23:36 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen = ft_strlen(src);
	int	i;
	
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
/*int	main()
{
	char *src = "abcdefgh";
	char dest[10];
	ft_strlcpy(dest, src, 4);
	//printf("%d", ft_strlcpy(dest, src, 4));
	printf("%s", dest);
	return (0);
}*/
