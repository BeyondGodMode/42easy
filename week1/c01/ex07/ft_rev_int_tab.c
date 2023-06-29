/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsongtra <tsongtra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 22:24:25 by beyond            #+#    #+#             */
/*   Updated: 2023/06/15 14:35:46 by tsongtra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		i;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}

/*int		main()
{
	int	a[] ={1000,232,1112,442,523,51225,66734,23345};
	int	i;
	for(i = 0 ; i<8 ; i++)
	{
		printf("%d ",a[i]);
	}
		printf("\n");
	ft_rev_int_tab(a,8);
	for(i = 0 ; i<8 ; i++)
	{
		printf("%d ",a[i]);
	}
}*/
