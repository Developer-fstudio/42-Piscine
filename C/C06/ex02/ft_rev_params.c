/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <faalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:39:18 by faalmeid          #+#    #+#             */
/*   Updated: 2022/10/11 13:39:25 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	if (argc >= 1)
	{
		while (argv[j])
			j++;
		j--;
		while (argv[j] && j != 0)
		{
			ft_putchar(argv[j]);
			j--;
		}
	}
	return (0);
}
