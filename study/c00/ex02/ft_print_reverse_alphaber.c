#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char c;

    c = 'z';
    while (c  >= 'a')
    {
        write(1, &c, 1);
        c--;
    }
}

int main()
{
    char c = 'z';
    ft_print_reverse_alphabet();
    return (0);
}


// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_print_reverse_alphaber.c                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/01/24 02:23:21 by hyunjiki          #+#    #+#             */
// /*   Updated: 2024/01/24 02:23:25 by hyunjiki         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <unistd.h>

// void ft_print_reverse_alphabet(void)
// {
//     char c;

//     c = 'z';
//     while(c >= 'a')
//     {
//         write(1, &c, 1);
//         c--;
//     }
// }

// int main()
// {
//     char c = 'z';
//     ft_print_reverse_alphabet();
//     return 0;
// }
