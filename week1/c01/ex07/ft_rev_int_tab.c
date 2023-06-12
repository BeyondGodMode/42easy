/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 22:24:25 by beyond            #+#    #+#             */
/*   Updated: 2023/06/12 22:45:21 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		i;
	int		n;

	n = size;
	i = 0;
	while(i < n / 2)
	{
		temp = tab[i];
		tab[i] = tab[n - 1];
		tab[tab[n - 1]] = temp;
		i++;
	}
}
