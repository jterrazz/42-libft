/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:26:16 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/15 01:04:06 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_str;
	unsigned char	*src_str;
	size_t			i;

	i = 0;
	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	if (dst_str < src_str)
		ft_memcpy(dst_str, src_str, len);
	else
	{
		while (len--)
		{
			dst_str[len] = src_str[len];
		}
	}
	return (dst);
}
