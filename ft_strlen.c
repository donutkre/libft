/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 21:12:57 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/30 21:12:57 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *s)
{
	const	char	*ptr;
	size_t		count;

	count = 0;
	ptr = s;
	while (*ptr)
	{
		++ptr;
		++count;
	}
	return (count);
}
