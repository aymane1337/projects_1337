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

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*dstc;
	const unsigned char	*srcc;


	dstc = (unsigned char*)dest;
	srcc = (const unsigned char*)src;
	i = 0;
	
	while (i < n)
	{
		dstc[i] = srcc[i];
		i++;
	}
	return (dest);
}

int	main()
{
	char src[] = "abcdefgh";
	ft_memcpy(src+2, src, 4);
	//printf("%p", ft_memcpy(dst, src, 4));
	for (int i = 0; i < 4; i++)
		printf("%c", src[i]);

	return (0);
}
