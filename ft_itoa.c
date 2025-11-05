/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:25:27 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/04 10:29:56 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_int(int n)
{
	int	count;
	
	count = 0;
	if (n < 0)
	{
		n = -n;
	}
	if (n > 9)
	{
		count++;
		return (count + count_int(n / 10));
	}
	else
	{
		count++;
	}

	return (count);
}

char	*ft_itoa(int n)
{
	int	len_int;
	char	*finalstr;
	int	i;
	int	digit;
	int	is_negative = 0;

	
	len_int = count_int(n);
	if (n < 0)
	{
		n = -n;
		is_negative = 1;
		len_int++;
	}
		
	finalstr = malloc(sizeof(char) * (len_int + 1));
	if(!finalstr)
		return (NULL);
	i = len_int - 1;
	while (i >= is_negative)
	{
		digit = n % 10;
		finalstr[i] = digit + '0';
		n = n / 10;
		i--;
	}
	if (is_negative)
		finalstr[0] = '-';
	finalstr[len_int] = '\0';

	return (finalstr);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //int n = -1234;
    char *s = ft_itoa(077);
    printf("%s\n", s);
    free(s);
    return 0;
}
