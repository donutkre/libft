/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:36:03 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/30 18:36:03 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*dst;
	unsigned int	sum;
	unsigned int	i;

	sum = count * size;
	if (!(dst = malloc(sum)))
		return (NULL);
	i = 0;
	while (sum--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
