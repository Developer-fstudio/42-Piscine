/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <faalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:27:38 by faalmeid          #+#    #+#             */
/*   Updated: 2022/10/08 18:11:06 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	base_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	space_sinal(char *str, int *ri)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	count = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ri = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sinal;
	int	res;
	int	num;
	int	len_base;

	res = 0;
	i = 0;
	len_base = check_base(base);
	if (len_base >= 2)
	{
		sinal = space_sinal(str, &i);
		num = base_char(str[i], base);
		while (num != -1)
		{
			res = (res * len_base) + num;
			i++;
			num = base_char(str[i], base);
		}
		return (res *= sinal);
	}
	return (0);
}
/*
int	main(int ac, char **av)
{
	if(ac == 3)
		printf("int : %d | char * : %s\n", ft_atoi_base(av[1], av[2]), av[1]);
	else if(ac == 2)
		printf("int : %d | char * : %s\n", ft_atoi_base(av[1],"0123456789"), av[1]);
	return (0);
}
*/
