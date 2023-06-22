/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:13:17 by beyond            #+#    #+#             */
/*   Updated: 2023/06/22 00:29:49 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	number;

	i = 1;
	number = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (i <= nb)
	{
		number *= i;
		i++;
	}
	return (number);
}
/*int	main(void)
{
	printf("%d",ft_iterative_factorial(3));
	return (0);
}*/