/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:12:02 by sbarreir          #+#    #+#             */
/*   Updated: 2025/03/10 18:03:42 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char str1[] = "ABC";
    char str2[] = "ABC";
    char str3[] = "BCD";
    char str4[] = "ABCD";

    printf("Comparing '%s' and '%s':\n", str1, str2);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str2));
    printf("strcmp: %d\n\n", strcmp(str1, str2));

    printf("Comparing '%s' and '%s':\n", str1, str3);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str3));
    printf("strcmp: %d\n\n", strcmp(str1, str3));

    printf("Comparing '%s' and '%s':\n", str1, str4);
    printf("ft_strcmp: %d\n", ft_strcmp(str1, str4));
    printf("strcmp: %d\n\n", strcmp(str1, str4));

    printf("Comparing '%s' and '%s':\n", str4, str1);
    printf("ft_strcmp: %d\n", ft_strcmp(str4, str1));
    printf("strcmp: %d\n\n", strcmp(str4, str1));

    return 0;
}*/
