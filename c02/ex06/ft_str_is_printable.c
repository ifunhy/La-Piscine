/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:42:32 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/26 22:01:24 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(32 <= str[i] && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	char	*a;
	char	*b;
	
	a = "abcd";     // 출력 가능한 문자
	b = "abc\nabc"; // 출력 불가능한 문자
	if (ft_str_is_printable(a) == 1)	
	{
		printf("출력 가능한 문자만 존재\n");
	}
	else if (ft_str_is_printable(a) == 0)
	{
		printf("출력 불가능한 문자 존재\n");
	}
	if (ft_str_is_printable(b) == 1)
	{
		printf("출력 가능한 문자만 존재\n");
	}
	else if (ft_str_is_printable(b) == 0)
	{
		printf("출력 불가능한 문자 존재\n");
	}
}*/
