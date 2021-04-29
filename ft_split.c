/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:40:38 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/29 13:40:38 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_error(char **r)
{
	size_t	i;

	i = 0;
	while (r[i])
	{
		free(r[i]);
		i++;
	}
	free(r);
	return (NULL);
}

static size_t	row_count(char const *s, char c)
{
	size_t	r;
	size_t	i;

	r = 0;
	i = 0;
	if (!*s)
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			r++;
			while (s[i] && s[i] == c)
				i++;
		}
		else
			i++;
	}
	if (s[i - 1] != c)
		r++;
	return (r);
}

static size_t	strlen_init(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

char			**ft_split(char const *s, char c)
{
	char	**r;
	size_t	l;
	size_t	row;
	size_t	i;

	if (!s)
		return (NULL);
	row = row_count(s, c);
	if (!(r = (char **)malloc(sizeof(char *) * (row + 1))))
		return (NULL);
	i = 0;
	while (i < row)
	{
		while (*s && *s == c)
			s++;
		l = strlen_init(s, c);
		if (!(r[i] = (char *)malloc(sizeof(char) * l + 1)))
			return (ft_error(r));
		ft_strlcpy(r[i], s, l + 1);
		i++;
		if (i < row)
			s += l;
	}
	r[i] = (NULL);
	return (r);
}
