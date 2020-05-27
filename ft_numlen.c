/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <dpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 16:14:08 by dpinheir          #+#    #+#             */
/*   Updated: 2020/05/26 20:40:01 by dpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned short			ft_numlen(int n)
{
	size_t				out;

	out = 0;
	if (n == -2147483648)
		return (ft_strlen("-2147483648"));
	if (n < 0 && (n = -n))
		out += 1;
	while (n)
	{
		out += 1;
		n /= 10;
	}
	return (out);
}
