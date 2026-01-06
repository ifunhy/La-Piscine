/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 02:47:57 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/04 15:30:22 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	dest = 0;
	len = ft_strlen(src);
	dest = (char *)malloc((len + 1) * (sizeof(char)));
	dest = ft_strcpy(dest, src);	// 0개 고치면 된다
	return (dest);
}

	//K0 -> 문자열을 복사, 문자열의 끝은 널
	//not complie
	//1. dest 선언 -> clear
	//2. src len 계산 -> clear 100
	//3. 동적할당 len 만큼 malloc
	//4. copy (strcpy)
	//5. 반환
