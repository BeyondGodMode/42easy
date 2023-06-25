/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:01:18 by beyond            #+#    #+#             */
/*   Updated: 2023/06/25 11:15:31 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	guess;

	guess = nb / 2;
	if (nb <= 0 || nb == 2)
		return (0);
	if (nb == 1)
		return (1);
	while (guess * guess - nb > 0)
	{
		guess = (guess + nb / guess) / 2;
	}
	if ((guess * guess) - nb != 0)
		return (0);
	return (guess);
}

// int	main(void)
// {
// 	// printf("%d",ft_sqrt(3));
// 	for (int i = 0 ; i < 125; i++)
// 	{
// 		printf("i = :%d Sqrt = %d\n",i, ft_sqrt(i));
// 	}
// 	return (0);
// }