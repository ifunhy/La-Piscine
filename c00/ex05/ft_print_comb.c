/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 06:04:12 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/24 06:04:16 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb(void)
{
    char first;
    char second;
    char third;

    first = '0';
    second = '0';
    third = '0';

    while(first <= '9')
    {
        second = '0';
        while(second <= '9')
        {
            third = '0';
            while(third <= '9')
            {
                
                    write(1, &first, 1);
                    write(1, &second, 1);
                    write(1, &third, 1);

                if(first != '1' || second != '5')
                if(!(first == '1' && second == '5')) // 150번대만 콤마 안 찍음
                {
                    write(1, ", ", 2);
                }
                third++;
            }
            second++;
        }
        first++;
    }
}

int main()
{
    ft_print_comb();
    return 0;
}
