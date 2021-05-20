/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:01:22 by ktiong            #+#    #+#             */
/*   Updated: 2021/05/04 15:31:25 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*arr;
	unsigned int	i;
	size_t			s1;
	size_t			s2;

	if (!s)
		return (NULL);
	s1 = ft_strlen(s);
	if (start > s1)
		return ((char *)ft_calloc(sizeof(*arr), 1));
	if (s1 > len)
		s2 = len;
	else
		s2 = s1 - start;
	arr = (char *)ft_calloc(sizeof(*arr), (s2 + 1));
	if (!arr)
		return (NULL);
	i = start;
	while (i - start < s2 && s[i])
	{
		arr[i - start] = s[i];
		i++;
	}
	return (arr);
}
