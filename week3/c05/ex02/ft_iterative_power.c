/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:57:43 by beyond            #+#    #+#             */
/*   Updated: 2023/06/22 12:07:15 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	number;

	i = 0;
	number = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power - 1)
	{
		nb *= number;
		i++;
	}
	return (nb);
}
// int	main(void)
// {
// 	printf("%d",ft_iterative_power(2,3));
// 	return (0);
// }