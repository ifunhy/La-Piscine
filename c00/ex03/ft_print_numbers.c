/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:46:00 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/14 21:30:14 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}

void ft_print_numbers(void)
{
	int i;

	i = 0;
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}
