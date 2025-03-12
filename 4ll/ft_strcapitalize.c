/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:37:03 by sbarreir          #+#    #+#             */
/*   Updated: 2025/03/04 17:43:37 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 32 || str[i] == 43 || str[i] == 45 || str[i] == 0)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include<stdio.h>

int main(void)
{
    char str[] = " ola que ase chavalote +fur +fuego";
  
    printf( "%s\n"," ola que ase chavalote +fur +fuego");
  
    printf("%s\n", ft_strcapitalize(str));

    return (0);
}*/
