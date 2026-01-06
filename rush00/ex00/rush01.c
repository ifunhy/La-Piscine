/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyouhele <kyouhele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:01:08 by kyouhele          #+#    #+#             */
/*   Updated: 2024/01/16 20:16:00 by kyouhele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	map(int x, int y, int map_x, int map_y);
void	rush(int x, int y);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	map_x;
	int	map_y;

	map_y = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (map_y <= y)
	{
		map_x = 1;
		while (map_x <= x)
		{
			map(x, y, map_x, map_y);
			map_x++;
		}
		map_y++;
		ft_putchar('\n');
	}
}

void	map(int x, int y, int map_x, int map_y)
{
	if (map_x == 1 && map_y == 1)
		ft_putchar('/');
	else if (map_x == 1 && map_y == y)
		ft_putchar('\\');
	else if (map_x == x && map_y == 1)
		ft_putchar('\\');
	else if (map_x == x && map_y == y)
		ft_putchar('/');
	else if ((map_x == 1 || map_x == x) && (map_y != 1 && map_y != y))
		ft_putchar('*');
	else if ((1 < map_x && map_x < x) && (map_y == 1 || map_y == y))
		ft_putchar('*');
	else
		ft_putchar(' ');
}
