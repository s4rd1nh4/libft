/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_char_in.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <dpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 16:08:20 by dpinheir          #+#    #+#             */
/*   Updated: 2020/05/26 20:40:01 by dpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool				ft_is_char_in(char c, char const *str)
{
	unsigned int	i;

	if (str)
	{
		i = -1;
		while (str[++i])
			if (str[i] == c)
				return (TRUE);
	}
	return (FALSE);
}
