/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 14:34:38 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/11 19:32:24 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Include le h partout 
//	Refaire strlcat
//	Norme

#ifndef MAIN_H
# define MAIN_H

# include <string.h>
# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void 	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len); // TEST A FAIRE
int		ft_strcmp(const char *s1, const char *s2); // TEST A FAIRE
int		ft_strncmp(const char *s1, const char *s2, size_t n); // TEST A FAIRE
int		ft_atoi(const char *str); // TEST A FAIRE
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c); // a FAIRE
int 	ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif