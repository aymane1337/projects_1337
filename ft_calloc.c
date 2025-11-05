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

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*sc;
	size_t			i;

	i = 0;
	if (elsize != 0 && nelem > SIZE_MAX / elsize)
	{
		return (NULL);
	}
	if (nelem == 0 || elsize == 0)
		return (NULL);
	sc = malloc(nelem * elsize);
	if (!sc)
		return (NULL);
	/*while (i < (elsize * nelem))
	{
		sc[i] = 0;
		i++;
	}*/
	ft_bzero(sc, (elsize * nelem));
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
