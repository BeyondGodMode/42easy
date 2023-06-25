/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsongtra <tsongtra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 02:58:07 by tsongtra          #+#    #+#             */
/*   Updated: 2023/06/26 03:14:41 by tsongtra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*nb;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	nb = (int *) malloc((max - min) * sizeof(int));
	while (i < (max - min))
	{
		nb[i] = min + i;
		i++;
	}
	return (nb);
}

// int	main(void)
// {
// 	int	*a;
// 	int	i;

// 	i = 0;
// 	a = ft_range(-5, 5);
// 	while (i < 11)
// 	{
// 		printf("%d ",a[i]);
// 		i++;
// 	}
// 	free(a);
// 	return (0);
// }

