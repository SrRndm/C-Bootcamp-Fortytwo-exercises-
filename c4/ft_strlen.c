/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:25:42 by sbarreir          #+#    #+#             */
/*   Updated: 2025/03/10 18:41:14 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "";
    char str3[] = "1234567890";

    printf("Testing ft_strlen and strlen:\n");

    printf("Length of '%s':\n", str1);
    printf("ft_strlen: %d\n", ft_strlen(str1));
    printf("strlen: %lu\n\n", strlen(str1));

    printf("Length of '%s':\n", str2);
    printf("ft_strlen: %d\n", ft_strlen(str2));
    printf("strlen: %lu\n\n", strlen(str2));

    printf("Length of '%s':\n", str3);
    printf("ft_strlen: %d\n", ft_strlen(str3));
    printf("strlen: %lu\n\n", strlen(str3));

    return 0;
}*/
