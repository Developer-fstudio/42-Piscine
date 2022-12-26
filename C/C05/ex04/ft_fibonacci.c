/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <faalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:17:53 by faalmeid          #+#    #+#             */
/*   Updated: 2022/10/11 13:18:04 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	result = (ft_fibonacci(index -1) + ft_fibonacci(index -2));
	return (result);
}
/*
#include<stdio.h>

void	main(void)
{
	printf("%llu", ft_fibonacci(100));
}
*/
