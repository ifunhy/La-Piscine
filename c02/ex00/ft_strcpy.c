/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 06:54:02 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/27 15:37:08 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
{
    char s1[10] = "hyunjiki";
    char s2[25] = "Eggplants are delicious.";
    
    ft_strcpy(s1, s2);  // 위 함수의 dest, src의 값을 s1,s2로 사용
    printf("%s\n", s1); // 왼쪽 문자열의 값을 오른쪽 문자열로 만든 것을 출력
}*/
