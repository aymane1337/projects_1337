/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:04:51 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/06 10:22:15 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	skip_whitespace(const char *str)
{
	int		i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	i = skip_whitespace(nptr);
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		if (sign == 1 && result > INT_MAX)
			return (-1);
		if ((sign == -1) && (-result < INT_MIN))
			return (0);
		i++;
	}
	return ((int)(result * sign));
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// int main()
// {
//     const char *num1 = "  123a41";
//     // const char *num2 = "-123443333333333333333333";

//     int ft_result1 = ft_atoi(num1);
//     int std_result1 = atoi(num1);

//     // int ft_result2 = ft_atoi(num2);
//     // int std_result2 = atoi(num2);

//     printf("ft_atoi(\"%s\") = %d\n", num1, ft_result1);
//     printf("atoi(\"%s\")    = %d\n", num1, std_result1);
//     printf("-------------------------------\n");
//     // printf("ft_atoi(\"%s\") = %d\n", num2, ft_result2);
//     // printf("atoi(\"%s\")    = %d\n", num2, std_result2);

//     return (0);
// }
