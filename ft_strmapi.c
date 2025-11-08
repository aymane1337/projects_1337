/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:52:20 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/06 10:12:21 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*finalstr;
	unsigned int	i;
	size_t			slen;

	if ((!s || !f))
		return (NULL);
	slen = ft_strlen(s);
	finalstr = malloc(sizeof(char) * (slen + 1));
	if (!finalstr)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		finalstr[i] = f(i, s[i]);
		i++;
	}
	finalstr[i] = '\0';
	return (finalstr);
}

// char capitalize_even(unsigned int i, char c)
// {
//     if (i % 2 == 0 && c >= 'a' && c <= 'z')
//         return c - 32; // convert to uppercase
//     return c;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
//     char *str = "hello world";
//     char *result;

//     result = ft_strmapi(str, capitalize_even);
//     if (!result)
//     {
//         printf("Error allocating memory\n");
//         return 1;
//     }

//     printf("Original: %s\n", str);
//     printf("Mapped  : %s\n", result);

//     free(result);
//     return 0;
// }
