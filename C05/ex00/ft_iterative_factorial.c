/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:53:37 by sbarreir          #+#    #+#             */
/*   Updated: 2025/03/12 12:34:11 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	rs;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	rs = 1;
	i = nb;
	while (i > 1)
	{
		rs = (rs * i);
		i--;
	}
	return (rs);
}
/*
#include <stdio.h>
int main (void)
{
int	n;
n = 9;
printf("%d", ft_iterative_factorial(n));
}
 */
