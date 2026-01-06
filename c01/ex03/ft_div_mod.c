/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:06:36 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/23 20:40:59 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{
	int a = 5, b = 3;
	int *div = &a;  // div가 가리키는 값은 a의 주소값
	int *mod = &b;  // mod가 가리키는 값은 b의 주소값

	ft_div_mod(a, b, div, mod); // 위 함수에에 a, b, div, mod 값 사용
	printf("%d %d\n", *div, *mod);  // 나머지와 몫 출력
	return 0;
}*/
