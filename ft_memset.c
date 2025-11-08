/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:36:41 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/01 14:27:19 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char s[] = "amine";
// 	memset(s, 48, -1);	
// }
// #include <stdio.h>
/*int     main()
{
        char    s[8] = "abcdefgh";
	int	arr[4] = {1,2,3,4};
        //ft_memset(s, '•', 8);
        ft_memset(s, 255, sizeof(s));

	//for (int i =0; i < 8; i++)
	//{
		//printf("%s", s);
		//printf("\n");
	//}

        return (0);
}*/
// int	main(void)
// {
// 	int	i;
// 	i = 0;
// 	ft_memset((char *)&i,0b111001, 1);
// 	ft_memset((char *)&i + 1, 0b101 , 1);
// 	printf("%i\n", i);
// }
