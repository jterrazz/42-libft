/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:11:49 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/10 20:16:47 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*res;

	i = 0;
	res = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			res = (char *)(s + i);
		i++;
	}
	if (c == 0 && s[i] == 0)
		res = (char *)(s + i);
	return (res);
}