/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 21:02:13 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/24 21:02:13 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char	*s;
	size_t		n;

	s = src;
	n = size;
	if (!dest && !src)
		return (0);
	if (n != 0)
	{
		while (--n != 0)
		{
			if ((*dest = *s) == '\0')
				break ;
			dest++;
			s++;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*dest = '\0';
		while (*s)
			s++;
	}
	return (s - src);
}
