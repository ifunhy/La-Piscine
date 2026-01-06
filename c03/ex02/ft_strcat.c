/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 00:07:53 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/28 23:13:25 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*po;

	po = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (po);
}
/*
#include <stdio.h>
int main()
{
	char a[30] = "Eggplants";
	char b[30] = " are delicious.";
	ft_strcat(a, b);
	printf("%s\n", a);
}*/
