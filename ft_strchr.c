/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:29:10 by ahbich            #+#    #+#             */
/*   Updated: 2025/10/31 22:54:50 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char sc;
	int	i;

	sc = (unsigned char)c;
	i = 0;

	while (s[i])
	{
		if (s[i] == sc)
			return ((char *)(s + i));
		i++;
	}
	return NULL;

}

int main() {
    const char *str = "Hello, World!";
    char target = 'o';
    char *result;

    result = ft_strchr(str, target);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", target, result - str);
        printf("Substring from found character: \"%s\"\n", result);
    } else {
        printf("Character '%c' not found.\n", target);
    }

    return 0;
}
