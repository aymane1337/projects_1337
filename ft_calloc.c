/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:54:31 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/02 11:54:15 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*sc;

	if (size != 0 && nmemb > SIZE_MAX / size)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	sc = malloc(nmemb * size);
	if (!sc)
		return (NULL);
	ft_bzero(sc, (size * nmemb));
	return ((void *)sc);
}
/*int main()
{
    int *arr;
    size_t i;
    size_t n = 5; // number of elements

    arr = (int *)ft_calloc(n, sizeof(int));
    if (!arr)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("Contents of array after ft_calloc:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // should print 0 0 0 0 0
    }
    printf("\n");

    free(arr); // always free allocated memory
    return (0);
}*/
