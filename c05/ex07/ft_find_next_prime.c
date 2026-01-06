/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 02:34:13 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/04 04:08:15 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		++i;
	}
	return (nb);
}
/*
#include <limits.h>
#include <stdio.h>
int main()
{
	printf("%d\n", ft_find_next_prime(-2));
}*/
