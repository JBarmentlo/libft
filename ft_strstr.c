/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:02:57 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/12 18:12:07 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *needle)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == needle[j] && needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char*)&str[i]);
		i++;
	}
	if (str[0] == '\0' && needle[0] == '\0')
		return (str);
	return (NULL);
}
