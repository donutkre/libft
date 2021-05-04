/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:44:03 by ktiong            #+#    #+#             */
/*   Updated: 2021/05/02 19:38:53 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		str1;
	int		str2;
	char	*arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	str1 = ft_strlen((char *)s1);
	str2 = ft_strlen((char *)s2);
	arr = malloc(sizeof(char) * (str1 + str2 + 1));
	if (!arr)
		return (0);
	while (j < str1)
		arr[i++] = s1[j++];
	j = 0;
	while (j < str2)
		arr[i++] = s2[j++];
	arr[i] = '\0';
	return (arr);
}
