/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:38:17 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/01 17:04:05 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *haystack = "hello world";
//    	char *needle = "lo";
//     	size_t len = 11;
//     	char *res = ft_strnstr(haystack, needle, len);
//     	if (res)
//        		printf("Found: %s\n", res); // Output: "lo world"
//    		else
//         	printf("Not found\n");
//     	return (0);
// }