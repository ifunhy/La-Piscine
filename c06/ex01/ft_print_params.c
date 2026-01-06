/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 04:27:00 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/04 02:23:53 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		put_str(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}


void put_str(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc < 1)
	{
		return (0);
	}
	while (i < argc)
	{
		put_str(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
