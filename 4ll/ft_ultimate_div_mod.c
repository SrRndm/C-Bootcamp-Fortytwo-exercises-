/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:05:11 by sbarreir          #+#    #+#             */
/*   Updated: 2025/02/26 17:05:30 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_div_mod(int *a, int *b)

{
	int	temp1;
	int	temp2;

	if (*b == 0) 
	{
		return (-1);
	}
	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 % temp2;
	return (0);
}
/*
#include<stdio.h>
int main(void)

{
	int	a;
	int	b;
	a=8;
	b=4;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n",a);
	printf("%d\n",b);
	return (0);
}
*/
