/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmsimang <jmsimang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 13:42:13 by jmsimang          #+#    #+#             */
/*   Updated: 2017/06/21 12:40:42 by jmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		i;
	char	*dest;

	i = -1;
	dest = dst;
	while (++i < (int)len)
	{
		if (*src != '\0')
			*dst++ = *src++;
		else
			*dst++ = 0;
	}
	return (dest);
}
