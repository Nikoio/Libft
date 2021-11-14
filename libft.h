/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

unsigned long	ft_strlen(const char *letter);

void			*ft_memset(void *b, int c, unsigned long len);

void			*ft_bzero(void *s, unsigned long n);

void			*ft_memcpy(void *dst, const void *src, unsigned long n);

void			*ft_memmove(void *dst, const void *src, unsigned long n);

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dstsize);

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long size);

int				ft_toupper(int ch);

int				ft_tolower(int ch);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

int				ft_strncmp(const char *s1, const char *s2, unsigned long n);

void			*ft_memchr(const void *s, int c, unsigned long n);

int				ft_memcmp(const char *s1, const char *s2, unsigned long n);

char			*ft_strnstr(const char *haystack, const char *needle,
					unsigned long len);

int				ft_atoi(const char *str);

void			*ft_calloc(unsigned long count, unsigned long size);

char			*ft_strdup(const char *src);

char			*ft_substr(char const *s, unsigned int start,
					unsigned long len);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strtrim(char const *s1, char const *set);

char			*ft_itoa(int n);

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void			ft_striteri(char *s, void (*f)(unsigned int, char*));

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char *str, int fd);

void			ft_putendl_fd(char *s, int fd);

void			ft_putnbr_fd(int n, int fd);

char			**ft_split(char const *s, char c);

#endif
