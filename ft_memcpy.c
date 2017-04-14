/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 16:48:25 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/15 01:10:28 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dst_str;
	unsigned char *src_str;
	size_t i;

	i = 0;
	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	while (i < n)
	{
		dst_str[i] = src_str[i];
		i++;
	}
	return (dst);
}
