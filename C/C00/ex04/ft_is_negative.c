/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:20:46 by faalmeid          #+#    #+#             */
/*   Updated: 2022/09/22 18:48:29 by faalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ivoid	ft_is_negative(int n)
{
	char	n;

	n = "N";

	char	p;

	p = "P";

	if(n >= 0 )
	{
		write(1,&p,1);
	}
	else
	{
		write(1,&n,1);
	}
}
