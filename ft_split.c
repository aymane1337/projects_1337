/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:18:23 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/03 19:45:07 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	cwords(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*alloc_word(const char *s, char c, size_t *wordlen)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	*wordlen = len;
	return (word);
}

static void	*free_memory(char **arr, size_t filled)
{
	while (filled > 0)
	{
		filled--;
		free(arr[filled]);
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**splitedstr;
	size_t	totalwords;
	size_t	wordlen;
	size_t	i;

	if (!s)
		return (NULL);
	totalwords = cwords(s, c);
	splitedstr = malloc(sizeof(char *) * (totalwords + 1));
	if (!splitedstr)
		return (NULL);
	i = 0;
	while (i < totalwords)
	{
		while (*s && *s == c)
			s++;
		wordlen = 0;
		splitedstr[i] = alloc_word(s, c, &wordlen);
		s += wordlen;
		if (!splitedstr[i])
			return (free_memory(splitedstr, i));
		i++;
	}
	splitedstr[i] = NULL;
	return (splitedstr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**arr;
// 	size_t	i;

// 	arr = ft_split(NULL, ',');
// 	i = 0;
// 	//while (arr[i])
// 	//{
// 	//	printf("Word %zu: %s\n", i, arr[i]);
// 	//	i++;
// 	//}
// 	//free_memory(arr, i);
// }
