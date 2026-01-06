/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyouhele <kyouhele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:43:43 by kyouhele          #+#    #+#             */
/*   Updated: 2024/01/17 15:04:15 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	map(int x, int y, int map_x, int map_y);
void	rush(int x, int y);
int		nb_len(char *str);
int		atoi(char *str, int len);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3 && argc != 1)
		return (0);
	if (argc == 3)
	{
		if (!nb_len(argv[1]) || !nb_len(argv[2]))
			return (0);
		x = atoi(argv[1], nb_len(argv[1]));
		y = atoi(argv[2], nb_len(argv[2]));
		rush(x, y);
	}
	rush(10, 10);
	rush(5, 5);
	return (0);
}

int	nb_len(char *str)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			cnt++;
		i++;
	}
	if (i == cnt)
		return (cnt);
	return (0);
}

int	atoi(char *str, int len)	// atoi를 재귀함수로 구현하여 길이값을 정수형으로 반환
{
	if (len > 0)	// len 길이값이 0보다 클 때 재귀함수형태로 길이값을 정수형으로 반환
		return (10 * atoi(str, len - 1) + (str[len - 1] - '0'));
	else	// 길이값이 0보다 작거나 같다면 음수인 길이값은 나타낼 수 없으므로 리턴 0
		return (0);
}
