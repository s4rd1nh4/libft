/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <dpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 15:54:03 by dpinheir          #+#    #+#             */
/*   Updated: 2020/05/26 20:40:01 by dpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	unsigned short	numlen;
	size_t			i;
	char			*out;
	t_bool			isn;

	if (n == 0)
		return (ft_strdup("0"));
	numlen = ft_numlen(n);
	if (!(out = malloc(sizeof(char) * (numlen + 1))))
		return (NULL);
	isn = FALSE;
	if ((i = 0) || (n == -2147483648))
		return (ft_strdup("-2147483648"));
	if (n < 0 && (isn = TRUE))
		out[i++] = '-';
	if (n < 0)
		n = -n;
	while (n)
	{
		out[numlen - i - !isn] = ('0' + n % 10);
		n /= 10;
		i += 1;
	}
	out[i] = '\0';
	return (out);
}
