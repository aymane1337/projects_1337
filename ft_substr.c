/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:11:15 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/03 20:06:17 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbstr;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
		return (calloc(1, 1));
	//if (start + len > strlen(s))
	//len = strlen(s) - start;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sbstr = malloc((len + 1) * sizeof(char));
	if (!sbstr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sbstr[i] = s[start];
		i++;
		start++;
	}
	sbstr[i] = '\0';
	return (sbstr);
}
 #include <stdlib.h>
#include <stdio.h>
 #include <string.h>
 int main()
 {
     const char *s = "abcdefg";    // length = 7
     size_t start = 6;       // near the end
     size_t len = SIZE_MAX;        // huge requested length

     char *str = NULL;

     printf("%p\n", str);

     printf("Original string: '%s'\n", s);
     printf("Requested start: %zu, requested len: %zu\n\n", start, len);

     char *sub = ft_substr(s, 100, 2); // safe method used
     if (sub)
     {
         printf("Safe method result: '%s'\n", sub);
         free(sub);
     }
     else
     {
         printf("Allocation failed\n");
     }

     return (0);
 }
