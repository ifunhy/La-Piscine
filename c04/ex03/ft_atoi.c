/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:51:05 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/01 22:36:31 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	white_space(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

int	minus_atoi(int i, char *str)
{
	int	minus;
	int	num;

	minus = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (minus * num);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;

	i = white_space(str);
	j = minus_atoi(i, str);
	return (j);
}
/*int main()
{
    char *a = "  +- --45+-454  esf";

    int ati = ft_atoi(a);
    printf("%s\n", a);
    printf("%d\n", ati);
    return (0);
}*/
