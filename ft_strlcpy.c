/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 21:12:49 by ktiong            #+#    #+#             */
/*   Updated: 2021/05/06 12:49:18 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		len;
	const char	*osrc;

	if (!dst || !src)
		return (0);
	len = size;
	osrc = src;
	if (size != 0)
	{
		while (--len && *src)
			*dst++ = *src++;
		if (len)
			*dst++ = *src++;
	}
	if (len == 0 && size != 0)
		*dst = '\0';
	return (ft_strlen(osrc));
}
