/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:36:35 by sbarreir          #+#    #+#             */
/*   Updated: 2025/03/04 16:34:09 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)

{
	int	i;	

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "1234567890";
	char str2[] = "1234567890a";
	printf( "%s\n","str0=1234567890");
	printf( "%s\n","str1=1234567890a");
	printf("%d\n", ft_str_is_numeric(str));
	printf("%d\n", ft_str_is_numeric(str2));
	return (0);
}*/
