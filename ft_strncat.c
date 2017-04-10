/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:47:50 by jterrazz          #+#    #+#             */
/*   Updated: 2017/03/16 09:10:41 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int length1;
	int length2;

	length1 = 0;
	length2 = 0;
	while (dest[length2] != '\0')
	{
		length2++;
	}
	while (src[length1] != '\0' && length1 < nb)
	{
		dest[length2 + length1] = src[length1];
		length1++;
	}
	dest[length1 + length2] = '\0';
	return (dest);
}
