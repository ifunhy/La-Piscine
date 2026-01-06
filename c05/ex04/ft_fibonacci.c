/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:11:59 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/03 02:31:39 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fi;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	fi = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fi);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_fibonacci(5));
}*/
