/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 22:50:41 by beyond            #+#    #+#             */
/*   Updated: 2023/06/17 00:33:22 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h> // comment duaw sus

int	ft_valid(int *numbers,int size)
{
	int		n;
	char	*text;
	
	n = sizeof(numbers) /  sizeof(int);
	if (n != size * size)
	{
		
	}
	while ()
	{
		/* code */
	}
	
}

int	*ft_getval(char *argv ,int size)
{
	int	i;
	int	*numbers;
	int	count;

	numbers = (int*)malloc(size*size*sizeof(int));
	i = 0;
	count = 0;
	while (argv[i] != '\0')
	{
		if(argv[i] >= '0' && argv[i] <= '9')
		{
			numbers[count] = argv[i] - '0';
			count++;
		}
		i++;
	}
	return numbers;
}

int main(int argc,char **argv)
{
	int	size;
	//while (si) error handle
	int	*numbers;
	
	size = *argv[2] - '0';
	numbers = ft_getval(argv[1], size);
	for(int i = 0; i < size*size; i++)
	{
		printf("%d ",numbers[i]);
	}
}
