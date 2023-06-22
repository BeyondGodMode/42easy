/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:41:58 by beyond            #+#    #+#             */
/*   Updated: 2023/06/22 11:56:47 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
// int	main(void)
// {
// 	printf("%d",ft_recursive_factorial(5));
// 	return (0);
// }