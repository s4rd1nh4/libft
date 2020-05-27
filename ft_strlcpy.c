/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <dpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 15:50:58 by dpinheir          #+#    #+#             */
/*   Updated: 2020/05/26 20:40:01 by dpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcpy(char *dest, const char *src, size_t len)
{
	char			*d;
	const char		*s;
	size_t			n;

	if (!dest && !src)
		return (0);
	d = dest;
	s = src;
	n = len;
	if (n != 0)
		while (--n != 0 && (*d++ = *s++) != '\0')
			;
	if (n == 0 && len != 0)
		*d = '\0';
	while (n == 0 && *s++)
		;
	return (s - src - 1);
}
