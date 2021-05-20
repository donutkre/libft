/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:01:58 by ktiong            #+#    #+#             */
/*   Updated: 2021/05/05 22:33:59 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_putnbr(long int n, char *s, int size)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	s[size - 1] = '\0';
	while (--size > 0)
	{
		s[size - 1] = '0' + n % 10;
		n = n / 10;
	}
	if (i == 1)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	nbr;
	char		*s;

	nbr = (long int)n;
	i = 2;
	if (n < 0)
		i++;
	while ((n / 10) != 0)
	{
		i++;
		n = n / 10;
	}
	s = (char *)ft_calloc(sizeof(char), i);
	if (!(s))
		return (NULL);
	return (ft_putnbr(nbr, s, i));
}
