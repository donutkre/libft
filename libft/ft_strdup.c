/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 21:12:38 by ktiong            #+#    #+#             */
/*   Updated: 2021/05/02 19:59:38 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy;
	int		ssz;
	int		n;

	if (!str)
		return (NULL);
	ssz = ft_strlen(str);
	if (!(copy = malloc(sizeof(char) * (ssz + 1))))
		return (NULL);
	n = 0;
	while (*str)
		copy[n++] = *str++;
	copy[n] = '\0';
	return (copy);
}
