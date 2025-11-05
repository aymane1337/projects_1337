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

#include "libft.h>"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	slen;
	int	i;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	i = 0;
	while (i < slen)
	{
		f(i, &s[i]);
		i++;
	}
}


// void to_upper(unsigned int i, char *c)
// {
//     if (*c >= 'a' && *c <= 'z')
//         *c = *c - 32; // convert to uppercase
// }

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str[] = "hello world";

//     printf("Before: %s\n", str);

//     ft_striteri(str, to_upper);

//     printf("After:  %s\n", str);

//     return 0;
// }