/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:41:05 by beyond            #+#    #+#             */
/*   Updated: 2023/06/28 12:17:39 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_len(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
		ptr++;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		total;

	if (size <= 0)
		return (NULL);
	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_len(strs[i]);
		i++;
	}
	total += (size - 1) * (ft_len(sep) + 1);
	str = (char *)malloc(total + 1);
	i = 0;
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char *strs[] = {"H", "easy", "world"};
// 	char sep[] = ", ";
// 	// printf("%ld\n", sizeof(strs));
// 	printf("%s", ft_strjoin(3, strs, sep));
// 	return (0);
// }