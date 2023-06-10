/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 11:19:23 by beyond            #+#    #+#             */
/*   Updated: 2023/06/10 11:37:05 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft_putchar.c"

void	rush(int	n,int	m)
{
	int		i;
	int		j;
	
	j=0;
	while (j < m)
	{
		i = 0;
		while (i < n)
		{
			if (j == 0 || j == m - 1)
				if ((i == 0 && j == 0) || (i == n - 1 && j == m - 1))
					ft_putchar('/');
				else if ((i == n-1 && j == 0) || (i == 0 && j == m - 1))
					ft_putchar('\\');
				else
					ft_putchar('*');
			else
				if (i == 0 || i == n - 1)
					ft_putchar('*');
				else
					ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}