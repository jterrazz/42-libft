/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:19:52 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/13 21:00:19 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t found;

	found = 0;
	if (*little == 0)
		return ((char *)big);
	while (*big && len)
	{
		if (*big == little[found])
			found++;
		else
			found = 0;
		if (!little[found])
			return ((char *)big - found + 1);
		big++;
		len--;
	}
	return (NULL);
}
