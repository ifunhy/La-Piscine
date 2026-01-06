#include <unistd.h>

void ft_print_alphabet(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
}

int main()
{
    char c = 'a';
    ft_print_alphabet();
    return (0);
}








// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_print_alphabet.c                                :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/01/24 02:13:26 by hyunjiki          #+#    #+#             */
// /*   Updated: 2024/01/24 02:13:34 by hyunjiki         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <unistd.h>

// void ft_print_alphabet(void)
// {
//     char c;

//     c = 'a';
//     while(c <= 'z')
//     {
//         write(1, &c, 1);
//         c++;
//     }
// }

// int main(void)
// {
//     char c = 'a';
//     ft_print_alphabet();
//     return 0;
// }
