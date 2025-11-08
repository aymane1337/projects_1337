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

	if (!s)
		return (NULL);
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
