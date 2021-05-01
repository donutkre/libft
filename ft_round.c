/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 23:31:53 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/30 23:31:53 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long double	ft_round(long double ld, int precision)
{
	long double	round;

	round = 0.5;
	if (ld < 0)
		round *= -1;
	while (precision--)
		round /= 10.0;
	return (round);
}

int main(void){
    ft_round(8, 8.7);
}