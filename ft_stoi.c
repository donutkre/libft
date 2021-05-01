/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 00:57:25 by ktiong            #+#    #+#             */
/*   Updated: 2021/05/01 00:57:25 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		isnumber(char *n)
{
	int i;

	i = 0;
	while (n[i])
	{
		if ((n[i] >= '0' && n[i] <= '9') || n[i] == '-')
			++i;

		return(0);
	}
}
#include <stdio.h>
int				ft_stoi(char *n)
{
	int		r;
	int		sign;

	isnumber(n);
	r = 0;
	sign = 1;
	while (ft_isspace(*n))
		n++;
	if (*n == '-')
		sign = -1;
	if (*n == '-' || *n == '+')
		n++;
	while (*n >= '0' && *n <= '9')
	{
		r = r * 10 + (*n - '0');
		n++;
	}
	return (r * sign);
}
