/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsongtra <tsongtra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 01:45:42 by tsongtra          #+#    #+#             */
/*   Updated: 2023/06/29 12:29:36 by tsongtra         ###   ########.fr       */
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

char	*ft_sort(char **av, int *j, int *index, char *mini)
{
	if (ft_strcmp(mini, av[*j]) > 0)
	{
		mini = av[*j];
		*index = *j;
	}
	return (mini);
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
		index = i;
		mini = temp;
		while (j < ac)
		{
			mini = ft_sort(av, &j, &index, mini);
			j++;
		}
		av[i++] = mini;
		av[index] = temp;
	}
	ft_write(ac, av);
	return (0);
}
