/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_alphabet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:23:18 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/04 21:37:32 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_alphabet(char str)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

void print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz",26);
}

void print_alphabet(char str)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

void main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}