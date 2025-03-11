/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:30:36 by sbarreir          #+#    #+#             */
/*   Updated: 2025/02/24 17:28:11 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write (1, "N", 1);
	else
		write (1, "P", 1);
}

/*
int main (void)
{
	ft_is_negative (-42);
	ft_is_negative (42);
}
*/
