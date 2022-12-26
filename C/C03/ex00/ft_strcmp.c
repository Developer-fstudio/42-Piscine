/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <faalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:46:58 by faalmeid          #+#    #+#             */
/*   Updated: 2022/10/06 11:35:23 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_strcmp("ola", "Boas"));
	printf("\n%d", ft_strcmp("Boas", "ol"));
	printf("\n%d", ft_strcmp("Boas", "ola"));
	printf("\n%d", ft_strcmp("ola", "ola"));
}
*/
