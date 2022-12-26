/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <faalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:51:17 by faalmeid          #+#    #+#             */
/*   Updated: 2022/10/06 11:40:13 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[i] = src [x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>

int	main()
{
	char src[] = "Noas";
	char dest[] = "ola ";
	printf("%s", ft_strcat(dest, src));
}
*/
