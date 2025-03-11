/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:07:29 by sbarreir          #+#    #+#             */
/*   Updated: 2025/02/24 20:20:44 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	a;

	a = '0';
	while (a <= '9')
	{
		write(1, &a, 1);
		a++;
	}
}
/*
int main (void)
{
	ft_print_numbers();
	return(0);
}
*/
