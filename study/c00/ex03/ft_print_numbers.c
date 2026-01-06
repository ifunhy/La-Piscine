#include <unistd.h>

void ft_print_numbers(void)
{
    char c;

    c = '1';
    while (c <= '9')
    {
        write(1, &c, 1);
        c++;
    }
}

int main()
{
    char c = '1';
    ft_print_numbers();
    return (0);
}


// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_print_numbers.c                                 :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/01/24 02:43:36 by hyunjiki          #+#    #+#             */
// /*   Updated: 2024/01/24 02:43:39 by hyunjiki         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <unistd.h>

// void ft_print_numbers(void)
// {
//     char c;
    
//     c = '1';
//     while(c <= '5')
//     {
//         write(1, &c, 1);
//         c++;
//     }
// }

// int main()
// {
//     char c = 0;
//     ft_print_numbers();
//     return 0;
// }
