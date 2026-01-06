/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:17:39 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/23 20:41:17 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*int main(void)
{
	int a = 30;
	int b = 5;

	printf("%d, %d\n", a, b);   // 지정된 a와 b의 값
	ft_ultimate_div_mod(&a, &b);    // a,b의 주소값을 위 함수에 사용
	printf("%d, %d\n", a, b);   // 나머지와 몫 출력
	return (0);
}*/
