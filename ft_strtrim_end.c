/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_end.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <dpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 15:33:37 by dpinheir          #+#    #+#             */
/*   Updated: 2020/05/26 20:40:01 by dpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim_end(char const *s1, char const *set)
{
	int		i;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char*)s1);
	i = ft_strlen(s1);
	while (i && ft_is_char_in(s1[--i], set))
		;
	return ((char*)s1 + i);
}
