/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:19:52 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/25 12:04:54 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(97 <= str[i] && str[i] <= 122))
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

    a = "abc";
    b = "abcDeF";
    c = "12345";
    if(ft_str_is_lowercase(a) == 1)
    {
        printf("알파벳 소문자만 존재\n");
    }
    else if(ft_str_is_lowercase(a) == 0)
    {
        printf("알파벳 소문자가 아닌 값 존재\n");

    }
    if(ft_str_is_lowercase(b) == 1)
    {
        printf("알파벳 소문자만 존재\n");
    }
    else if(ft_str_is_lowercase(b) == 0)
    {
        printf("알파벳 소문자가 아닌 값 존재\n");

    }
        if(ft_str_is_lowercase(c) == 1)
    {
        printf("알파벳 소문자만 존재\n");
    }
    else if(ft_str_is_lowercase(c) == 0)
    {
        printf("알파벳 소문자가 아닌 값 존재\n");

    }
}*/
