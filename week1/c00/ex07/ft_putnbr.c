/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyond <beyond@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 00:26:23 by beyond            #+#    #+#             */
/*   Updated: 2023/06/09 01:04:14 by beyond           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putnbr(int nb)
{
    if(nb<0)
    {
        write(1, "-" ,1);
        nb = nb*-1;
    }
    if(nb >= 10)
    {
        ft_putnbr(nb/10);
        nb=nb%10;
    }
    if(nb < 10)
    {
        nb=nb+'0';
        write(1, &nb ,1);
    }
}

int     main(void)
{
    int a=9;
    int b= -142;
    //a=a+'0';
    //write(1,&a,1);
    ft_putnbr(b);
    return 0;
}