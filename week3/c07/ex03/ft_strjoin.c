/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsongtra <tsongtra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:51:08 by tsongtra          #+#    #+#             */
/*   Updated: 2023/06/29 10:51:12 by tsongtra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_len(strs[i]);
		i++;
	}
	total += (size) * (ft_len(sep));
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
// 	char **strs = NULL;
// 	char sep[] = ", ";
// 	// printf("%ld\n", sizeof(strs));
// 	printf("%s", ft_strjoin(0, strs, sep));
// 	return (0);
// }