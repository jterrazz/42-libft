/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strqu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 20:28:51 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/11 20:34:04 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strequ(char const *s1, char const *s2)
{
	int i;
	
	i = 0;
	while (s1[i] == s2[i])
		i++;
	if (!s1[i] && !s2[i])
		return (1);
	return (0);
}