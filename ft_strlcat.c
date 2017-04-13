/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:55:39 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/13 15:28:58 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t length_dst;
	size_t length_src;
	size_t i;
	size_t total_size;
	size_t n;

	i = 0;
	n = size;
	length_dst = 0;
	length_src = 0;
	while (src[length_src])
		length_src++;
	while (n-- && dst[length_dst])
		length_dst++;
	total_size = length_src + length_dst;
	if (size <= length_dst)
		return (size + length_src);
	while (n != 1)
	{
		dst[length_dst + i] = src[i];
		i++;
		n--;
	}
	dst[length_dst + i] = '\0';
	return (total_size);
}
