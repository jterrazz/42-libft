/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:51:53 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/12 14:53:59 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int c)
{
	unsigned char c_char;

	c_char = (unsigned char)c;
	if (c_char >= '0' && c_char <= '9')
		return (1);
	return (0);
}