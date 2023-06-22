/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:05:38 by beyond            #+#    #+#             */
/*   Updated: 2023/06/22 12:08:02 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
// int	main(void)
// {
// 	printf("%d",ft_recursive_power(3,3));
// 	return (0);
// }