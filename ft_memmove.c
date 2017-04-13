/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:26:16 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/13 12:52:34 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_str;
	unsigned char	*src_str;
	unsigned char	*tmp;
	size_t			i;
	
	i = 0;
	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	tmp = (unsigned char *)malloc(sizeof(unsigned char) * len);
	if (tmp == NULL)
		return (dst);
	while (i < len)
	{
		tmp[i] = src_str[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst_str[i] = *tmp++;
		i++;
	}
	return (dst);
}
