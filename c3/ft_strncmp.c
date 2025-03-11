/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:26:52 by sbarreir          #+#    #+#             */
/*   Updated: 2025/03/10 21:26:31 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
char str1[] = "ABC";
char str2[] = "ABC";
char str3[] = "BCD";
char str4[] = "ABCD";
unsigned int n = 3;

printf("Comparing '%s' and '%s' for first %u characters:\n", str1, str2, n);
printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
printf("strncmp: %d\n\n", strncmp(str1, str2, n));

printf("Comparing '%s' and '%s' for first %u characters:\n", str1, str3, n);
printf("ft_strncmp: %d\n", ft_strncmp(str1, str3, n));
printf("strncmp: %d\n\n", strncmp(str1, str3, n));

printf("Comparing '%s' and '%s' for first %u characters:\n", str1, str4, n);
printf("ft_strncmp: %d\n", ft_strncmp(str1, str4, n));
printf("strncmp: %d\n\n", strncmp(str1, str4, n));

printf("Comparing '%s' and '%s' for first %u characters:\n", str4, str1, n);
printf("ft_strncmp: %d\n", ft_strncmp(str4, str1, n));
printf("strncmp: %d\n\n", strncmp(str4, str1, n));

return 0;
}*/
