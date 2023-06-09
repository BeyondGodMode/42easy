/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsongtra <tsongtra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:49:02 by beyond            #+#    #+#             */
/*   Updated: 2023/06/13 15:45:24 by tsongtra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		mini;
	int		temp;
	int		index;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		j = i;
		mini = temp;
		while (j < size)
		{	
			if (mini > tab[j])
			{
				mini = tab[j];
				index = j;
			}
			j++;
		}
		tab[i] = mini;
		tab[index] = temp;
		i++;
	}
}
