/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:28:09 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/12 19:38:34 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next;
	
	if (!alst || !del)
		return ;
	while (*alst != NULL)
	{
		next = *alst->next
		ft_lstdelone(alst, del);
		*alst = next;
	}
	alst = NULL;
}