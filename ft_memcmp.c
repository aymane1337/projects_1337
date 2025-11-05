/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:25:41 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/02 12:31:27 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sc1;
	unsigned char	*sc2;
	size_t			i;

	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (sc1[i] != sc2[i])
			return (sc1[i] - sc2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str1[] = "Hello, world!";
//     char str2[] = "Hello, worle!";
//     size_t n = 13;

//     int result_ft = ft_memcmp(str1, str2, n);
//     int result_std = memcmp(str1, str2, n);

//     printf("ft_memcmp result: %d\n", result_ft);
//     printf("memcmp result:    %d\n", result_std);

//     if (result_ft == result_std)
//         printf("✅ Both functions behave the same.\n");
//     else
//         printf("❌ There is a difference between the functions.\n");

//     return (0);
// }
