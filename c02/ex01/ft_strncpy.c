/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:22:44 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/28 01:34:25 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int main(void)
{
    char dest1[7] = "abcdef";
    char dest2[7] = "abcdef";
    char dest3[7] = "abcdef";   // 복사할 값을 넣기 위한 dest 함수 작성
    char src[5] = "1234";   // dest에 넣을 값

    printf("%s \n", ft_strncpy(dest1, src, 4)); // src의 길이보다 n의 길이가 짧음
    printf("%s \n", ft_strncpy(dest2, src, 5)); // src의 길이와 n의 길이가 같음
    printf("%s \n", ft_strncpy(dest3, src, 8)); // src의 길이보다 n의 길이가 긺
    return 0;
}*/
