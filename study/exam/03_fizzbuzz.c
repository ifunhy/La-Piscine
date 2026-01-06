/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:03:26 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/05 02:12:46 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
    int num;
    char ten;
    char one;

    num = 1;
    while (num <= 100)
    {
        if (num % 20 == 0)
        {
            write(1, "fizzbuzz", 8);
        }
        else if (num % 5 == 0)
        {
            write(1, "buzz", 4);
        }
        else if (num % 4 == 0)
        {
            write(1, "fizz", 4);
        }
        else
        {
            if (num == 100)
            {
                write(1, "100", 1);
            }
            else if (num >= 10 && num <= 99)
            {
                ten = (num / 10) +'0';
                one = (num % 10) + '0';
                write(1, &ten, 1);
                write(1, &one, 1);
            }
            else if (num <= 9)
            {
                one = (num % 10) + '0';
                write(1, &one, 1);
            }
        }
        write(1, "\n", 1);
        num++;
    }
    return (0);
}