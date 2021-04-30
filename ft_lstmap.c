/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 21:11:40 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/30 21:11:40 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*r;
	t_list	*tmp;

	r = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		if (!(tmp = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&r, del);
			return (NULL);
		}
		ft_lstadd_back(&r, tmp);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (r);
}
