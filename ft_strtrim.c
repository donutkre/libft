/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:58:12 by ktiong            #+#    #+#             */
/*   Updated: 2021/05/02 21:41:39 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *s)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		src;
	int		dst;
	int		i;

	src = 0;
	if (!s1)
		return (0);
	len = ft_strlen((char *)s1);
	while (s1[src] && ft_check(s1[src], set))
		src++;
	dst = len - 1;
	while (dst >= src && s1[dst] && len > 0 && ft_check(s1[dst], set))
		dst--;
	str = malloc(dst - src + 2);
	if (!str)
		return (0);
	i = src - 1;
	while (++i <= dst)
		str[i - src] = s1[i];
	str[dst - src + 1] = '\0';
	return (str);
}
