/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:49:49 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/04 19:42:23 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(len * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{
	int	*range;
	int	min = 1;
	int	max = 10;
	int	i;
	int	j = 0;

	range = &min;
	i = ft_ultimate_range(&range, min, max);
	printf("%d\n", i);
	while (range[j] != '\0')
	{
		printf("%d\n", range[j]);
		j++;
	}
}
*/
// 문제: min ~ max - 1 까지 (1 단위) 정수 배열을 할당하고 반환
// ex: range에 값을 넣고, (max - min) 출력
// 1. 배열을 만들어서 범위 설정를 한 다음 **range에 넘김
// -arr을  malloc하여 값을 저장하고 **range에 arr을 대입한다.
// 2. **range의 값을 넣을 배열을 할당 -> malloc
// 3. max - min의 길이값을 구함
// 4. 길이값을 사용하여 min 부터 max - 1까지의 값을 반환
// 5. 예외
