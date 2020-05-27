/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <dpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 15:32:58 by dpinheir          #+#    #+#             */
/*   Updated: 2020/05/26 20:40:01 by dpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_strtrim(char const *s1, char const *set)
{
	char				*start;
	char				*stop;

	if (!s1 || !s1[0])
		return (ft_strdup(""));
	else if (!set)
		return (ft_strdup(s1));
	else
	{
		start = ft_strtrim_begin(s1, set);
		stop = ft_strtrim_end(s1, set);
		return (ft_substr(s1, start - s1, stop - start + 1));
	}
}
