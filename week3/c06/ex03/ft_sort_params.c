/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsongtra <tsongtra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 01:45:42 by tsongtra          #+#    #+#             */
/*   Updated: 2023/06/26 02:39:52 by tsongtra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] == '\0' || s1[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);	
	return (0);
}


void	ft_write(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		while (*av[i] != '\0')
		{
			write(1, av[i], 1);
			av[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	int		index;
	char	*mini;
	char	*temp;

	i = 1;
	while (i < ac)
	{
		temp = av[i];
		j = i + 1;
		mini = temp;
		while (j < ac)
		{
			if (ft_strcmp(mini, av[j]) > 0)
			{
				mini = av[j];
				index = j;
			}
			j++;
		}
		av[i] = mini;
		av[index] = temp;
		i++;
	}
	ft_write(ac, av);
	// while (i < ac)
	// {
	// 	while (*av[i] != '\0')
	// 	{
	// 		write(1, av[i], 1);
	// 		av[i]++;
	// 	}
	// 	write(1, "\n", 1);
	// 	i++;
	// }
	return (0);
}
