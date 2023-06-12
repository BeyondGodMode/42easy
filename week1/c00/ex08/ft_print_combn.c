/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 02:34:49 by beyond            #+#    #+#             */
/*   Updated: 2023/06/11 16:36:00 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	displayComb(int n, int start, int combination[], int index) 
{
	int		i;
	char	digit;
	
	if (index == n) 
	{
		i = 0;
		while (i < n) 
		{
			digit = combination[i] + '0';
			write(1, &digit, 1);
			write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		return;
	}
	if (start > 9) 
	{
		return;
	}
	combination[index] = start;
	displayComb(n, start + 1, combination, index + 1);
	displayComb(n, start + 1, combination, index);
}

void	ft_print_combn(int n) 
{
	if (n <= 0 || n >= 10) 
	{
		return;
	}
	int combination[10];
	displayComb(n, 0, combination, 0);
}

int main(void) 
{
	int n = 3;
	ft_print_combn(n);
	return 0;
}