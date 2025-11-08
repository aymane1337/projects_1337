/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 22:45:09 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/03 00:46:20 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	if (!s1 || !set)
    	return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (end > start && ft_strchr(set, s1[end]))
	{
		end--;
	}
	return (ft_substr(s1, start, end - start + 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*set;
// 	char	*trimmed;

// 	s1 = "---abcd#---";
// 	set = "-#";
// 	trimmed = ft_strtrim(s1, set);
// 	if (!trimmed)
// 	{
// 		printf("Allocation failed\n");
// 		return (1);
// 	}
// 	printf("Original : [%s]\n", s1);
// 	printf("Set      : [%s]\n", set);
// 	printf("Trimmed  : [%s]\n", trimmed);
// 	free(trimmed);
// 	return (0);
// }
