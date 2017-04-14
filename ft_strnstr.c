/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:19:52 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/14 15:45:17 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t str_len;

	i = 0;
	str_len = ft_strlen(little);
	if (!little || !big || !len)
		return ((char *)big);
	while (*big && (i + str_len) <= len)
	{
		if (!ft_strncmp(big, little, len))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
