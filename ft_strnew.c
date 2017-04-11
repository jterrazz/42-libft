/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:51:25 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/11 19:57:07 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strnew(size_t size)
{
	char *str;

	str = (char *)ft_memalloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}