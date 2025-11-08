/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:45:32 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/04 15:26:24 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	slen;
	size_t	i;

	if (!s)
		return ;
	slen = ft_strlen(s);
	i = 0;
	while (i < slen)
	{
		f(i, &s[i]);
		i++;
	}
}
