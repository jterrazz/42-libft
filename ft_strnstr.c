/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:19:52 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/13 20:44:22 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t size;

	size = 0;
	while (little[size] != '\0')
		size++;
	if (size == 0)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && j < len)
		{
			if (little[j + 1] == '\0' || j + 1 == len)
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
