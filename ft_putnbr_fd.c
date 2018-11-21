/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:49:32 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/14 16:53:27 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void	print(long n, int fd)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		print(n, fd);
	}
	else if (n < 10)
	{
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else if (n >= 10)
	{
		print(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	long	n;

	n = nb;
	print(n, fd);
}
