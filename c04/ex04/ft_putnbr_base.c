/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 02:58:23 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/02 03:12:15 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base_test(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr(int nbr, int base_len, char *base)
{
	unsigned int	num;

	if (nbr < 0)
	{
		num = -nbr;
		write(1, "-", 1);
	}
	else
		num = nbr;
	if ((num / base_len) != 0)
		ft_putnbr((num / base_len), base_len, base);
	write(1, &base[num % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_base_test(base);
	if (base_len < 2)
		return ;
	ft_putnbr(nbr, base_len, base);
}
/*
#include <stdio.h>

int main()
{
    char *b1 = "asdfgqwert";
    char *b2 = "01";
    char *b3 = "0123456789ABCDEF";
    char *b4 = "asdfq+wer";
    char *b5 = "asdfqwera";
    char *b6 = "2";

    int n = 123456789;
    int n2 = -123456789;
    int n3 = -2147483648;

    printf("number: %d, base: \"%s\" -> \n", n, b1);
    printf("%s\n\n", "sdfgqwert");

    printf("number: %d, base: \"%s\" -> \n", n, b2);
    printf("%s\n\n", "111010110111100110100010101");

    printf("number: %d, base: \"%s\" -> \n", n3, b1);
    printf("%s\n\n", "-dsgegrfwgr");

    printf("number: %d, base: \"%s\" -> \n", n2, b2);
    printf("%s\n\n", "-111010110111100110100010101");

    printf("number: %d, base: \"%s\" -> \n", n, b3);
    printf("%s\n\n", "75BCD15");

    printf("number: %d, base: \"%s\" -> \n", n, b4);
    printf("%s\n\n", "");

    printf("number: %d, base: \"%s\" -> \n", n, b5);
    printf("%s\n\n", "");

    printf("number: %d, base: \"%s\" -> \n", n, b6);
    printf("%s\n\n", "");

    printf("number: %d, base: \"%s\" -> \n", n, b1);
    ft_putnbr_base(n, b1);
    printf("\n\n");

    printf("number: %d, base: \"%s\" -> \n", n, b2);
    ft_putnbr_base(n, b2);
    printf("\n\n");

    printf("number: %d, base: \"%s\" -> \n", n3, b1);
    ft_putnbr_base(n3, b1);
    printf("\n\n");

    printf("number: %d, base: \"%s\" -> \n", n2, b2);
    ft_putnbr_base(n2, b2);
    printf("\n\n");

    printf("number: %d, base: \"%s\" -> \n", n, b3);
    ft_putnbr_base(n, b3);
    printf("\n\n");

    printf("number: %d, base: \"%s\" -> \n", n, b4);
    ft_putnbr_base(n, b4);
    printf("\n\n");

    printf("number: %d, base: \"%s\" -> \n", n, b5);
    ft_putnbr_base(n, b5);
    printf("\n\n");

    printf("number: %d, base: \"%s\" -> \n", n, b6);
    ft_putnbr_base(n, b6);
    printf("\n\n");
}*/
