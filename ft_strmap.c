/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 20:19:11 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/11 20:23:13 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmap(char const *s, char (*f)(char))
{
	char *new_s;
	int i;
	
	new_s = ft_strnew(ft_strlen(s));
	if (new_s)
	{
		i = 0;
		while (s[i])
		{
			new_s[i] = f(s[i]);
			i++;
		}
	}
	return (new_s);
}