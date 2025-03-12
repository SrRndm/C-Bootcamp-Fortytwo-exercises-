/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:51:10 by sbarreir          #+#    #+#             */
/*   Updated: 2025/03/04 16:52:15 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "\n \t \r";
	char str2[] = "falf4657654";
	printf( "%s\n","str=\\n \\t \\r");
	printf( "%s\n","str1=falf");
	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str2));
	return (0);
}*/
