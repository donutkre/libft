/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 21:13:04 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/30 21:13:04 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*r;
	unsigned int	len;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	if (!(r = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		r[i] = f(i, s[i]);
		i++;
	}
	r[i] = 0;
	return (r);
}
