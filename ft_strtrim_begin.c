/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_begin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <dpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 15:34:30 by dpinheir          #+#    #+#             */
/*   Updated: 2020/05/26 20:40:01 by dpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim_begin(char const *s1, char const *set)
{
	unsigned int	i;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char*)s1);
	i = -1;
	while (s1[++i] && ft_is_char_in(s1[i], set))
		;
	return ((char*)s1 + i);
}
