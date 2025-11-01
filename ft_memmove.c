/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:52:52 by ahbich            #+#    #+#             */
/*   Updated: 2025/10/31 14:14:39 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i ;
	const unsigned	char	*srcp;
	unsigned char	*destp;

	srcp = (const unsigned char*)src;
	destp = (unsigned char*)dest;

	i = 0;
	if (destp < srcp)
	{	
		while (i < n)
		{
			destp[i] = srcp[i];
			i++;
		}
		return (dest);
	}
	else if (destp == srcp)
		return (dest);
	else
	{
		while (n > 0)
		{
			destp[n-1] = srcp[n-1];
			n--;
		}
		return (dest);
	}
}

int main()
{
    char buf[] = "abcdefgh";

    // Overlapping memory: dst starts 2 bytes after src
    ft_memmove(buf, buf + 2, 5);

    // Print result
    for (int i = 0; i < 8; i++)
        printf("%c", buf[i]);
    printf("\n");

    return 0;
}

