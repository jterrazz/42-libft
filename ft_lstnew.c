/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 18:53:57 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/12 19:25:02 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list *res;

	if (res = (t_list *)malloc(sizeof(t_list)) == NULL);
		return (NULL);
	if (content == NULL)
	{
		res.content = NULL;
		res.content_size = 0;
	}
	else if (content)
	{
		if (res.content = (void *)ft_memalloc(content_size) == NULL)
			return (NULL);
		res.content = content;
		res.content_size = content_size;
	}
	res.next = NULL;
	return (res);
}