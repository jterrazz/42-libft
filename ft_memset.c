/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 15:10:06 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/10 16:36:47 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int i;
	unsigned char *str;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}