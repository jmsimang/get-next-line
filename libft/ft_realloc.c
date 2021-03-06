/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmsimang <jmsimang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 19:12:59 by jmsimang          #+#    #+#             */
/*   Updated: 2017/06/23 23:57:21 by jmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void *nptr;

	if (!ptr || !size)
		return (NULL);
	if (!(nptr = ft_strnew(size)))
		return (NULL);
	ft_strcpy(nptr, ptr);
	return (nptr);
}
