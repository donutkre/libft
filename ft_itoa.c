/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:01:58 by ktiong            #+#    #+#             */
/*   Updated: 2021/05/02 21:00:22 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
