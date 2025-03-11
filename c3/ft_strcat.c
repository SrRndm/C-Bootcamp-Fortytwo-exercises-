/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarreir <sbarreir@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:28:58 by sbarreir          #+#    #+#             */
/*   Updated: 2025/03/10 16:26:40 by sbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    char dest[50] = "if windows is the answer ";
    char src[] = "you didnt got the question";
    printf("Before ft_strcat: %s\n", dest);
    ft_strcat(dest, src);
    printf("After ft_strcat: %s\n", dest);
    return 0;
}*/
