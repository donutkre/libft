/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:58:12 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/30 18:58:12 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	l1;
	size_t	l2;
	char	*s;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	l1 = 0;
	l2 = ft_strlen(s1);
	while (s1[l1] && ft_strchr(set, s1[l1]))
		l1++;
	while (s1[l2 - 1] && ft_strchr(set, s1[l2 - 1]))
	{
		if (l2 - 1 < 1)
			break ;
		l2--;
	}
	if (l1 > l2)
		return (ft_strdup(""));
	if (!(s = (char *)malloc(sizeof(char) * (l2 - l1 + 1))))
		return (NULL);
	ft_strlcpy(s, s1 + l1, l2 - l1 + 1);
	return (s);
}
