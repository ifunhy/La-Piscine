/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 03:10:05 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/03 17:30:18 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}

#include <stdio.h>
int main()
{
    int i = 5;
    printf("%d\n", ft_iterative_factorial(i));
}
