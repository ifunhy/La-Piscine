/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:49:41 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/25 16:33:46 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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

    a = "asdAgh";
    b = "asdf124 asd";
    if (ft_str_is_alpha(a) == 1)
    {
        printf("알파벳만 존재\n");
    }
    else if (ft_str_is_alpha(a) == 0)
    {
        printf("알파벳이 아닌 값 존재 \n");
    }
   
    if (ft_str_is_alpha(b) == 1)
    {
        printf("알파벳만 존재 \n");
    }
    else if (ft_str_is_alpha(b) == 0)
    {
        printf("알파벳이 아닌 값 존재 \n");
    }
}*/
