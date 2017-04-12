/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 12:52:35 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/12 14:54:08 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_lsize(long n)
{
	unsigned int size;
	
	size = 1;
	while (n /= 10)
		size++;
	return (size);
}

static void			set_itoa(char *str, long n_long, unsigned int neg, unsigned int len)
{
	int divider;
	
	divider = 1;
	while (--len)
		divider *= 10;
	while ()
}
char				*ft_itoa(int n)
{
	char *str;
	long n_long;
	unsigned int neg;
	unsigned int len;

	n_long = n;	
	len = ft_lsize(n_long);
	str = ft_strnew(len + neg);
	if (str == NULL)
		return (NULL);
	neg = 0;
	if (n_long < 0)
	{
		neg = 1;
		n_long *= -1;
	}
	set_itoa(str, n_long, neg, len);
}