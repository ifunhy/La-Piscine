#include <unistd.h>

void ft_is_negative(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
}

int main()
{
    int n = -1;
    ft_is_negative(n);
    return (0);
}





// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_is_negative.c                                   :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/01/24 02:58:36 by hyunjiki          #+#    #+#             */
// /*   Updated: 2024/01/24 02:58:38 by hyunjiki         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <unistd.h>

// void ft_is_negative(int n)
// {
//     if(n < 0)
//     {
//         write(1, "N", 1);
//     }
//     else
//     {
//         write(1, "P", 1);
//     }
// }

// int main()
// {
//     int n = -5;
//     ft_is_negative(n);
//     return 0;
// }
