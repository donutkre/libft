/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:44:03 by ktiong            #+#    #+#             */
/*   Updated: 2021/05/05 21:19:46 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*arr;

	if (!s1 || !s2)
		return (0);
	arr = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!arr)
		return (NULL);
	i = 0;
	while (*(s1 + i))
	{
		*(arr + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		*(arr + i + j) = *(s2 + j);
		j++;
	}
	return (arr);
}
