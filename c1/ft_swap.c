/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:22:13 by sbarreir          #+#    #+#             */
/*   Updated: 2025/02/26 16:51:04 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include<stdio.h>
int main(void)

{
	int	a;
	int	b;
	a=5;
	b=10;
	ft_swap(&a, &b);

	printf("%d\n",a);
	printf("%d\n",b);
	return (0);
}
*/
