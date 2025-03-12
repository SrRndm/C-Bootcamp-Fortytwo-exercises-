/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:48:13 by sbarreir          #+#    #+#             */
/*   Updated: 2025/03/04 16:49:07 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "JAVA";
	char str2[] = "falf";
	printf( "%s\n","str0=JAVA");
	printf( "%s\n","str1=falf");
	printf("%d\n", ft_str_is_uppercase(str));
	printf("%d\n", ft_str_is_uppercase(str2));
	return (0);
}*/
