/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 10:48:49 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/01 12:02:24 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t n)
{
	unsigned const char *sc;
	size_t	i;

	sc = (unsigned const char*)s;
	i = 0;

	while (i < n)
	{
		if (sc[i] == (unsigned char)c)
			return ((void*)(sc + i));
		i++;
	}
	return (NULL);
}
