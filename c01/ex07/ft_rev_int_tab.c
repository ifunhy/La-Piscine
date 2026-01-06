/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:41:51 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/23 21:01:28 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = temp;
		i++;
	}
}
/* #define SIZE 8  // 배열 요소 개수 정의

int main(void) 
{
	int a[] = { -1, 0, 299, 2, 956, 0, 9, -900 };
	
	ft_rev_int_tab(a, SIZE);  // 숫자 배열 순서 리버스
	
	for (int i = 0; i < SIZE; i++)      // 순서 뒤집은 배열을 화면에 출력
	printf("%d, ", a[i]);   // 출력 결과: -900, 9, 0, 956, 2, 299, 0, -1,

	return 0;
}*/
