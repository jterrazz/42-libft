/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 12:20:56 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/12 23:47:22 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	get_trim_length(const char *str)
{
	unsigned int i;
	unsigned int end;
	
	end = ft_strlen(str) - 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		i++;
	while (str[end] == ' ' || str[end] == '\n' || str[end] == '\t')
	{
		if (end == 0)
			break;
		end--;
	}
	if (end - i + 1 <= 0)
		return (0);
	return (end - i + 1);
}

char			*ft_strtrim(char const *s)
{
	char *new_s;
	unsigned int len;
	unsigned int i;
	unsigned int j;
	
	i = 0;
	j = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	len = get_trim_length(s);
	new_s = ft_strnew(len);
	while (i < len)
	{
		new_s[j] = s[i];
		i++;
		j++;
	}
	return (new_s);
}
