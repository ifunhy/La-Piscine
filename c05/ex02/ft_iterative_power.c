/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 03:55:16 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/03 18:26:10 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power != 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_iterative_power(2, 10));
}*/
