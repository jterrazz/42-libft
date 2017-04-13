/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:19:27 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/13 13:05:20 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c)
{
	unsigned char c_char;

	c_char = (unsigned char)c;
	if (c_char >= 32 && c_char <= 127)
		return (1);
	return (0);
}
