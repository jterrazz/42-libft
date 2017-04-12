/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:24:27 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/12 14:57:41 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	unsigned char c_char;
	
	c_char = (unsigned char) c;
	if (c_char >= 'a' && c_char <= 'z')
		return (c_char - 32);
	return (c_char);
}