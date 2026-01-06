/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 06:28:19 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/04 18:35:59 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int 	i;

	len = max - min;
	arr = (int *)malloc(len * (sizeof(int)));
	i = 0;
	if (min >= max)
	{
		arr = 0;
		return (arr);
	}
	while (i < len)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}


#include <stdio.h>
int	main()
{
	int min = 3;
	int max = 10;
	int *arr = ft_range(min, max);

	for(int i = 0; i < (max - min); i++)
		printf("%d ", arr[i]);
}


// 문제: min ~ max - 1 까지 (1 단위) 배열을 만들어서 반환
// ex: max 5, min 0 -> [0, 1, 2, 3, 4]
// 방법
// 1. 담을 크기를 구하자. 몇개의 요소를 담을 것인가
// 2. 배열을 할당하자.
// 3. min 부터 max - 1까지 값을 넣자
// 4. 반환
// + 예외
