/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <faalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:40:38 by faalmeid          #+#    #+#             */
/*   Updated: 2022/10/06 11:42:05 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (x < nb && src[x] != '\0')
	{
		dest[i + x] = src [x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char src[] = "Boas";
	char dest[] = "Fabio ";
	printf("%s", ft_strncat(dest, src, 2));
}
*/
