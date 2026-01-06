/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:35:18 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/01 22:37:01 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	num;
	char			c;

	if (nb < 0)
	{
		num = -nb;
		write(1, "-", 1);
	}
	else
		num = nb;
	if ((num / 10) != 0)
		ft_putnbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}
/*
int main(void)
{
    ft_putnbr(-25678);
    write(1, "\n", 1);
    ft_putnbr(25678);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    return (0);
}*/
