/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarment <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:47:55 by jbarment          #+#    #+#             */
/*   Updated: 2018/11/13 18:41:51 by jbarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

#ifndef LIBFT_H
# define LIBTF_H

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
int		ft_strclr(char *s);
void	ft_striter(char *str, void (*f)(char*));
void	ft_striteri(char *str, void (*f)(unsigned int, char*));
char	*ft_strmap(char const *str, char (*)(char));
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		is_equal_nocase(char c, char d);
char	*ft_strsub(char const *src, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

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
int		ft_isascii(int c);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putstrn(char *str, int n);
int		ft_strlen(char *str);
#endif
