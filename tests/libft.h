/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:47:55 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/13 15:52:34 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

#ifndef LIBFT_H
# define LIBTF_H

void	*ft_memset(void *b, int c, size_t len);
void	*ft_bzero(void *b, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memccpy(void *dst, const void *src, int c, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *needle);
char	*ft_strnstr(const char *s1, const char *needle, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putstrn(char *str, int n);
int		ft_strlen(char *str);
#endif
