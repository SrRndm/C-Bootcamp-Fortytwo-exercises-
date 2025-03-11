/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:16:43 by sbarreir          #+#    #+#             */
/*   Updated: 2025/03/09 17:12:33 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	ret;
	int	i;

	i = 0;
	ret = 1;
	while (str[i])
	{
		if (!((str[i] >= 97 && str[i] <= 122) 
				|| (str[i] >= 65 && str[i] <= 90)))
		{
			ret = 0; 
		}
		i++;
	}
	return (ret);
}
/*
#include <stdio.h>
#include <string.h>
int main ()

{
	char *string;
	char *strong;
	char *strung;
	string = "eeee";
	strong = "";
	strung = "edd13";
	printf("%d\n", ft_str_is_alpha(string));
	printf("%d\n", ft_str_is_alpha(strong));
	printf("%d\n", ft_str_is_alpha(strung));
	return (0);
} 
*/
