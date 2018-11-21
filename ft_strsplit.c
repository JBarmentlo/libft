/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:19:35 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/14 16:30:43 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**tab_init(char *str, char c)
{
	unsigned int	i;
	int				words;
	char			**out;

	if (str == NULL)
		return (NULL);

	i = 0;
	words = 0;

	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		while (str[i] != c && str[i])
			i++;
		while (str[i] == c && str[i])
			i++;
		words++;		
	}
	if (!(out = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	out[words] = NULL;
	return (out);
}

char	**ft_strsplit(char *str, char c)
{
	unsigned int	i;
	unsigned int	words;
	unsigned int	start;
	char			**out;
	size_t			len;

	if(!(out = tab_init(str, c)))
		return (NULL);

	i = 0;
	words = 0;
	while (str[i])
	{
		len = 0;
		while (str[i] == c && str[i])
			i++;
		start = i;
		while (str[i] != c && str[i])
		{
			i++;
			len++;
		}
		while (str[i] == c && str[i])
			i++;
		out[words] = ft_strsub(str, start, len);
		words++;
	}
	return (out);
}
