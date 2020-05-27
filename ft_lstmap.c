/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <dpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 15:24:22 by dpinheir          #+#    #+#             */
/*   Updated: 2020/05/26 20:54:10 by dpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		**out;
	t_list		*tmp;
	t_list		*new;

	if (!lst || !f)
		return (NULL);
	tmp = NULL;
	out = &tmp;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(out, del);
			return (NULL);
		}
		ft_lstadd_back(out, new);
		lst = lst->next;
	}
	return (*out);
}
