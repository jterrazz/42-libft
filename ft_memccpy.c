/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 17:18:07 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/13 00:10:07 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dst_str;
	unsigned char *src_str;
	unsigned char c_char;
	size_t i;

	i = 0;
	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	c_char = (unsigned char)c;
	while (i < n && src_str[i] != c_char)
	{
		dst_str[i] = src_str[i];
		i++;
	}
	if (src_str[i] == c_char)
	{
		dst_str[i] = src_str[i];
		return (&dst_str[i + 1]);
	}
	else
		return (NULL);
}
