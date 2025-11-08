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

static	int	count_int(long n)
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

static	void	fill_digits(char *str, long n, int len, int is_negative)
{
	int	digit;
	int	i;

	i = len - 1;
	while (i >= is_negative)
	{
		digit = n % 10;
		str[i] = digit + '0';
		n = n / 10;
		i--;
	}
	if (is_negative)
		str[0] = '-';
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	int		len_int;
	long	num;
	char	*finalstr;
	int		is_negative;

	num = n;
	is_negative = 0;
	len_int = count_int(n);
	if (n < 0)
	{
		num = -num;
		is_negative = 1;
		len_int++;
	}
	finalstr = malloc(sizeof(char) * (len_int + 1));
	if (!finalstr)
		return (NULL);
	fill_digits(finalstr, num, len_int, is_negative);
	return (finalstr);
}
