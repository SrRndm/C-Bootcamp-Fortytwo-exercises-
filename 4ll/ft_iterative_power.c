/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:05:18 by sbarreir          #+#    #+#             */
/*   Updated: 2025/03/13 10:10:22 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	rs;

	rs = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		rs = nb * rs;
		i++;
	}
	return (rs);
}
/*
#include <stdio.h>
int main (void)
{
int	nb;
int	power;
nb = 9;
power = 2;
printf("%d", ft_iterative_power(nb, power));
}
 */
