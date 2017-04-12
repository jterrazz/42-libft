/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:47:58 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/12 20:40:12 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *start;
	
	if (!lst || !(*lst) || !f)
		return (NULL);
	new = f(lst);
	start = new;
	lst = lst->next;
	while (lst != NULL)
	{
		new->next = f(lst);
		new = new->next;
		lst = lst->next;
	}
	return (start);
}