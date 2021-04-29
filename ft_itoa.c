/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:01:58 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/29 12:01:58 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(int n)
{
	int	i;

	i = (n <= 0) ? 1 : 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int			i;
	int			sign;
	char		*a;
	long long	tmp;

	sign = n < 0 ? -1 : 1;
	i = ft_len(n);
	if (!(a = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	a[i] = 0;
	i--;
	tmp = n < 0 ? -(long long)n : (long long)n;
	while (i >= 0)
	{
		a[i] = '0' + tmp % 10;
		tmp /= 10;
		i--;
	}
	if (sign == -1)
		a[0] = '-';
	return (a);
}
