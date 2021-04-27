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
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str)
{
	int x;
	int n;

	x = 0;
	n = 1;
	while (*str == ' ' || *str == '\n' || *str == '\r'
			|| *str == '\v' || *str == '\t' || *str == '\f')
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '+')
			++str;
		else if (*str == '-')
		{
			n *= -1;
			++str;
		}
	}
	while (*str >= 48 && *str <= 57)
	{
		x = x * 10 + (*str - 48);
		++str;
	}
	return (x * n);
}
