/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:43:25 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/14 16:33:51 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void	print(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		print(n);
	}
	else if (n < 10)
	{
		ft_putchar(n % 10 + '0');
	}
	else if (n >= 10)
	{
		print(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	print(n);
}
