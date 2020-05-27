/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <dpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 16:13:43 by dpinheir          #+#    #+#             */
/*   Updated: 2020/05/26 20:40:01 by dpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_realloc(void *ptr, size_t size)
{
	char	*out;
	size_t	oldsize;

	if (!ptr)
		return (malloc(size));
	oldsize = sizeof(ptr);
	if (size <= oldsize)
		return (ptr);
	out = malloc(size);
	if (!out)
		return (NULL);
	ft_memcpy(out, ptr, oldsize);
	free(ptr);
	return (out);
}
