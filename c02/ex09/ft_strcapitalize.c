/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:58:12 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/28 12:59:16 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	special_case(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
			if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
					if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
						str[i] -= 32;
		i++;
	}
	return (*str);
}

char	down_case(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	down_case(str);
	special_case(str);
	return (str);
}
/*int main()
{
    char a[] = "saLut, comMent tu vas ? 42mots quAraNte-deux; cinQuante+et+un";
    printf("입력한 값: %s\n", a);
    printf("변환한 값: %s\n", ft_strcapitalize(a));
}*/
