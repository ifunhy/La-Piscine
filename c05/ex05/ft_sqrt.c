/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:05:06 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/03 18:42:10 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if ((i - 1) < nb)
	{
		while (i <= nb / i)
		{
			if (nb == i * i)
				return (i);
			else
				i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(4));
}*/
