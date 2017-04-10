/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 19:30:19 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/10 19:34:03 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_c;
	unsigned char	*s2_c;
	size_t			i;

	i = 0;
	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	while (s1_c[i] == s2_c[i] && i < n)
		i++;
	return (s1_c[i] - s2_c[i]);
}