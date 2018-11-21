/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:09:28 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/14 16:39:44 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int	is_equal_nocase(char c, char d)
{
	if (c == d)
		return (1);
	if (ft_isalpha(c) && ft_isalpha(d))
		if (c == d + 32 || c == d - 32)
			return (1);
	return (0);
}

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;

	if (s1 == NULL || s2 == NULL)
		return (-1);
	i = 0;
	while (is_equal_nocase(s1[i], s2[i]) && s1[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	return (0);
}
