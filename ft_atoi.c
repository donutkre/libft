/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 22:04:40 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/26 22:04:40 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_isspace(int c)
{
	if (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
		|| c == ' ')
		return (1);
	return (0);
}

static int	value(int n)
{
	if (n == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *nbr)
{
	int		i;
	int		n;
	long	nb;
	long	limit;

	i = 0;
	nb = 0;
	n = 1;
	while (ft_isspace(nbr[i]) == 1)
		i++;
	if (nbr[i] == '+' || nbr[i] == '-')
		if (nbr[i++] == '-')
			n = -1;
	limit = LONG_MAX / 10;
	while (ft_isdigit(nbr[i]) == 1)
	{
		if (nb > limit)
			return (value(n));
		nb = (nb * 10) + (nbr[i] - '0');
		if (nb < 0)
			return (value(n));
		i++;
	}
	return ((int)(nb * n));
}
