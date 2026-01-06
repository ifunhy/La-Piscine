/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:42:10 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/23 20:44:11 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *len)
{
	int	i;

	i = 0;
	while (len[i])
	{
		i++;
	}
	return (i);
}
/*void  main(void)
{
	char sen[10] = "aaaaa"; // 10칸 배열 sen에 문자열 "aaaaa" 삽입
        printf("%d\n", ft_strlen(sen)); 
	// ft_strlen 함수에 배열 sen 사용하여 "aaaaa"의 문자 수를 세고 반환
}*/

int strlen(char *len)
{
	int i;

	i = 0;
	while(len[i])
	{
		i++;
	}
	return (0);
}