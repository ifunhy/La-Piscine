/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_str_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:06:50 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/05 02:13:56 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_str_case(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] +=32;
		}
		i++;
	}
	return (str);
}



char	*ft_str_case(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}


#include <stdio.h>

int	main()
{
	char str[10];
	str[0] = 'a';
	str[1] = 'B';
	str[2] = 'C';
	str[4] = 'd';
	str[5] = '\0';
	printf("%s\n", ft_str_case(str));
}
