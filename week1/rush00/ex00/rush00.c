/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:45:49 by beyond            #+#    #+#             */
/*   Updated: 2023/06/10 11:11:05 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft_putchar.c"

void	rush(int	n,int	m)
{
	int		i;
	int		j;
	
	j=0;
	while (j <= m)
	{
		i = 0;
		while (i < n)
		{
			if (j == 0 || j == m)
				if (i == 0 || i == n - 1)
					ft_putchar('o');
				else
					ft_putchar('-');
			else
				if (i == 0 || i == n - 1)
					ft_putchar('|');
				else
					ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}