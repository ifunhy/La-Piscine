/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 03:23:18 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/25 12:04:20 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
    char *a;
    char *b;

    a = "123";
    b = "abc123";
    if(ft_str_is_numeric(a) == 1)
    {
        printf("숫자만 존재\n");
    }
    else if(ft_str_is_numeric(a) == 0)
    {
        printf("숫자가 아닌 값 존재\n");

    }
    if(ft_str_is_numeric(b) == 1)
    {
        printf("숫자만 존재\n");
    }
    else if(ft_str_is_numeric(b) == 0)
    {
        printf("숫자가 아닌 값 존재\n");

    }
}*/
