/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:00:48 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/02 20:38:10 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*newstr;
	if (!s1 || !s2)
		return (NULL);

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	newstr = malloc((s1len + s2len + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, (s1len + s2len + 1));
	ft_strlcat(newstr, s2, (s1len + s2len + 1));
	return (newstr);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
//     char *s1 = "Hello, ";
//     char *s2 = "World!";
//     char *joined;

//     joined = ft_strjoin(s1, s2);
//     if (!joined)
//     {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     printf("Joined string: %s\n", joined);

//     free(joined);
//     return (0);
// }
