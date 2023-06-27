/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:41:05 by beyond            #+#    #+#             */
/*   Updated: 2023/06/27 17:02:26 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// #include <stdio.h>

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

	str = (char *)malloc(sizeof(str) + 1);
	str = (char *)malloc((sizeof(sep) * size) + 1);
	ft_strcat(str, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[i]);
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*strs[] = {"Hello","easy","world","fun"};
// 	char	sep[] = ", ";
// 	printf("%s", ft_strjoin(3,strs,sep));
// 	return (0);
// }