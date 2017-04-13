/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:30:27 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/13 12:53:09 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	unsigned char c_char;
	
	c_char = (unsigned char)c;
	if (c_char >= 'A' && c_char <= 'Z')
		return (c_char + 32);
	return (c_char);
}
