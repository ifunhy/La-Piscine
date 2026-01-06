/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:59:47 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/25 12:06:05 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(65 <= str[i] && str[i] <= 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
    char *a;
    char *b;
    char *c;

    a = "abcd";
    b = "1b3DeF";
    c = "ABCD";
    if(ft_str_is_uppercase(a) == 1)
    {
        printf("알파벳 대문자만 존재\n");
    }
    else if(ft_str_is_uppercase(a) == 0)
    {
        printf("알파벳 대문자가 아닌 값 존재\n");

    }
    if(ft_str_is_uppercase(b) == 1)
    {
        printf("알파벳 대문자만 존재\n");
    }
    else if(ft_str_is_uppercase(b) == 0)
    {
        printf("알파벳 대문자가 아닌 값 존재\n");

    }
        if(ft_str_is_uppercase(c) == 1)
    {
        
        printf("알파벳 대문자만 존재\n");
    }
    else if(ft_str_is_uppercase(c) == 0)
    {
        printf("알파벳 대문자가 아닌 값 존재\n");

    }
}*/
