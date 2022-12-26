/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <faalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:53:53 by faalmeid          #+#    #+#             */
/*   Updated: 2022/10/06 11:43:53 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[x] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
			x++;
		if (to_find[x] == '\0')
			return (str + i);
		i++;
		x = 0;
	}
	return (0);
}
/*
#include<stdio.h>

int	main()
{
	char str[] = "Fabio esta na porta a espera";
	char to_find[] = "porta";
	printf("%s", ft_strstr(str, to_find));
}
*/
