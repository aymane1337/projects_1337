/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:52:52 by ahbich            #+#    #+#             */
/*   Updated: 2025/10/31 14:14:39 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*srcp;
	unsigned char		*destp;

	if (dest == src || n == 0)
		return (dest);
	srcp = (const unsigned char *)src;
	destp = (unsigned char *)dest;
	i = 0;
	if (destp < srcp || destp >= srcp + n)
	{
		while (i < n)
		{
			destp[i] = srcp[i];
			i++;
		}
		return (dest);
	}
	while (n > 0)
	{
		destp[n - 1] = srcp[n - 1];
		n--;
	}
	return (dest);
}
