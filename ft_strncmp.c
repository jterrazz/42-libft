/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 11:32:27 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/13 17:45:05 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (--n > 0 && s1 && s2)
	{
		if (*s1 != *s2)
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
		else if (*s1 == '\0')
			return (0);
		s2++;
		s1++;
	}
	return (0);
}
