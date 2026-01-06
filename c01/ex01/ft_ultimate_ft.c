/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:36:10 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/23 21:02:29 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*int main(void)
{
        int a;
        
        int *nbr8;
        int **nbr7;
        int ***nbr6;
        int ****nbr5;
        int *****nbr4;
        int ******nbr3;
        int *******nbr2;
        int ********nbr1;
        int *********b;

        a = 21;
        
        nbr8 = &a;
        nbr7 = &nbr8;
        nbr6 = &nbr7;
        nbr5 = &nbr6;
        nbr4 = &nbr5;
        nbr3 = &nbr4;
        nbr2 = &nbr3;
        nbr1 = &nbr2;
        b = &nbr1;
        
        printf("%d\n", a);  // ft_ultimate_ft 함수에 값을 넣은 게 아니기 때문에 a의 값이 출력
        // ft_ultimate_ft(&b); // b 자체가 주소값. &b는 주소값의 주소값
        // printf("%d\n", a)
        ft_ultimate_ft(b);  // b 자체가 현재 주소값이기 때문에 굳이 & 사용 안 함
        printf("%d\n", a);  // b의 주소값에 저장된 42를 출력
        printf("%d\n", a);
        return 0;
}*/
