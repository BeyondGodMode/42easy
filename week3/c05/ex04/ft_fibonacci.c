/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:11:52 by beyond            #+#    #+#             */
/*   Updated: 2023/06/22 13:01:33 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}
// int	main(void)
// {
// 	printf("%d",ft_fibonacci(8));
// 	return (0);
// }