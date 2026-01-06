/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:29:04 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/01/27 04:53:41 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	change_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			change_hex(str[i]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
/*int main()
{
    char str[] = {-95}; // 아스키코드엔 음수값이 없으니까 a1이 나와야 함
    // str = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    //\a1 = 161
    //0 1 2 ~ 127 -128 -127 ~ -95 ~ -2 -1 
    //             128  129   161
}*/
