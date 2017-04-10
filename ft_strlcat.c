/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:55:39 by jterrazz          #+#    #+#             */
/*   Updated: 2017/03/18 11:20:21 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int length_dest;
	unsigned int length_src;
	unsigned int i;
	unsigned int total_size;

	i = 0;
	length_dest = 0;
	length_src = 0;
	while (src[length_src])
		length_src++;
	while (dest[length_dest])
		length_dest++;
	total_size = length_src + length_dest;
	if (size <= length_dest)
		return (size + length_src);
	while (length_dest + i < total_size)
	{
		dest[length_dest + i] = src[i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (total_size);
}
