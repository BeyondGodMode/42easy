/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsongtra <tsongtra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 22:50:41 by beyond            #+#    #+#             */
/*   Updated: 2023/06/18 00:37:43 by tsongtra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h> // comment duaw sus

int	ft_checkinput(int *numbers, int argc, int size)
{
	int		n;
	char	*text;
	//n = sizeof(numbers) /  sizeof(int);
	if (n != size * size)
		return (1);
	if (argc != 3)
		return (1);
	return (0);
}

int	ft_puttoarray(char *argv, int *numbers, int i, int j)
{
	int	count;
	int	sign;

	count = 1;
	while (argv[i] != '\0')
	{
		if (argv[i] == '-')
		{
			sign = -1;
			i++;
		}
		else
			sign = 1;
		numbers[j] = 0;
		while ((argv[i] >= '0' && argv[i] <= '9'))
		{
			numbers[j] = numbers[j] * 10 + (argv[i] - '0') * sign;
			i++;
			if (argv[i] == ' ')
				count++;
		}
		j++;
		i++;
	}
	return (count);
}

int	*ft_getval(char *argv, int size, int *count)
{
	int	i;
	int	j;
	int	*numbers;
	int	sign;

	i = 0;
	j = 0;
	numbers = (int *) malloc (size * size * sizeof(int));
	*count = ft_puttoarray(argv, numbers, i, j);
	return (numbers);
}

int	main(int argc, char **argv)
{
	int	size;
	int	*numbers;
	int	count;

	size = 4;
	numbers = ft_getval(argv[1], size, &count);
	printf("size of array %d\n", count);
	for (int i = 0; i < size*size; i++)
	{
		printf("%d ",numbers[i]);
	}
	free(numbers);
	return 0;
}
