/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 16:48:25 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/13 12:44:29 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dst_str;
	unsigned char *src_str;

	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	while (--n + 1)
		dst_str[n] = src_str[n];
	return (dst);
}
