/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:58:54 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/12 14:53:47 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char c_char;
	
	c_char = (unsigned char)c;
	if ((c_char >= 'a' && c_char <= 'z')
		|| (c_char >= 'A' && c_char <= 'Z'))
		return (1);
	return (0);
}