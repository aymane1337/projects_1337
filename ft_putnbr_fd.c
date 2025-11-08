/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 23:17:57 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/05 23:42:07 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	result;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	else
	{
		result = n + '0';
		write(fd, &result, 1);
	}
}

// int main(void)
// {
//     ft_putnbr_fd(0, 1); write(1, "\n", 1);
//     ft_putnbr_fd(5, 1); write(1, "\n", 1);
//     ft_putnbr_fd(12345, 1); write(1, "\n", 1);
//     ft_putnbr_fd(-5, 1); write(1, "\n", 1);
//     ft_putnbr_fd(-98765, 1); write(1, "\n", 1);
//     ft_putnbr_fd(2147483647, 1); write(1, "\n", 1);
//     ft_putnbr_fd(-2147483648, 1); write(1, "\n", 1);
// }
