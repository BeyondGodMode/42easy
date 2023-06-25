/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsongtra <tsongtra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 03:18:04 by tsongtra          #+#    #+#             */
/*   Updated: 2023/06/26 03:30:21 by tsongtra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc ((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int	*nb;
// 	int	i;
// 	int	n;

// 	n = ft_ultimate_range(&nb, 0, 5);
// 	printf("n is =  %d\n",n);
// 	i = 0;
// 	while (i++ < 4)
// 		printf("%d ", nb[i]);
// 	return (0);
// }
