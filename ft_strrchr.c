/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:50:20 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/29 13:50:20 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	find;
	size_t	arr;

	last = (char*)s;
	find = (char)c;
	arr = ft_strlen(s);
	while (arr > 0)
	{
		if (last[arr] == find)
			return (last + arr);
		arr--;
	}
	if (last[arr] == find)
		return (last);
	return (0);
}
