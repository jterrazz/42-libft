/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 19:42:30 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/10 19:42:33 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int length1;
	int length2;

	length1 = 0;
	length2 = 0;
	while (dest[length2] != '\0')
	{
		length2++;
	}
	while (src[length1] != '\0')
	{
		dest[length2 + length1] = src[length1];
		length1++;
	}
	dest[length1 + length2] = '\0';
	return (dest);
}
