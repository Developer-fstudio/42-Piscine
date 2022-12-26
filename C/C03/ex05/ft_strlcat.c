/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <faalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:56:25 by faalmeid          #+#    #+#             */
/*   Updated: 2022/10/06 11:45:27 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	dest_len = x;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src [i] != '\0' && i < size - dest_len - 1)
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (dest_len + src_len);
}
/*
#include<stdio.h>

int main (void)
{
	char src[] = ", Boas Malta";
    char dest [] = "Alguma coisa";

    printf("%i	|\n", ft_strlcat(dest, src, 25));
    printf("%s	|\n", dest);
}
*/
