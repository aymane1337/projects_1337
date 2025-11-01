/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 18:48:30 by ahbich            #+#    #+#             */
/*   Updated: 2025/10/31 20:27:22 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main()
{
    char str[] = "abcd";
    int i = 0;

    // Loop through each character and convert it to uppercase
    while (str[i] != '\0')
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }

    // Print the resulting string
    printf("%s\n", str);

    return 0;
}
