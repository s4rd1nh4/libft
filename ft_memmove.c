/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <dpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 16:14:47 by dpinheir          #+#    #+#             */
/*   Updated: 2020/05/26 20:40:01 by dpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t n)
{
	int				i;

	if (!dst && !src)
		return (NULL);
	if ((unsigned char*)dst > (unsigned char*)src && ((i = n) || 1))
		while (--i > -1)
			*((unsigned char*)(dst + i)) = *((unsigned char*)(src + i));
	else if ((unsigned char*)dst < (unsigned char*)src)
		ft_memcpy(dst, src, n);
	return (dst);
}
