/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 21:33:28 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/24 21:33:28 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	len1;
	size_t	len2;
	char	*res;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	len1 = 0;
	len2 = ft_strlen(s1);
	while (s1[len1] && ft_strchr(set, s1[len1]))
		len1++;
	while (s1[len2 - 1] && ft_strchr(set, s1[len2 - 1]))
	{
		if (len2 - 1 < 1)
			break ;
		len2--;
	}
	if (len1 > len2)
		return (ft_strdup(""));
	if (!(res = (char *)malloc(sizeof(char) * (len2 - len1 + 1))))
		return (NULL);
	ft_strlcpy(res, s1 + len1, len2 - len1 + 1);
	return (res);
}
