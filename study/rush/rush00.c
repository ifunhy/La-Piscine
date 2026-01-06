/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyouhele <kyouhele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:01:08 by kyouhele          #+#    #+#             */
/*   Updated: 2024/01/18 15:37:24 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	map(int x, int y, int map_x, int map_y);
void	rush(int x, int y);
void	ft_putchar(char c);	// 다른 파일에 존재하는 변수와 사용할 변수 선언

void	rush(int x, int y)	// 사각형을 그리기 위한 역할. x는 세로크기, y는 가로크기
{
	int	map_x;	// 현재 출력 위치의 가로 좌표
	int	map_y;	// 현재 출력 위치의 세로 좌표

	map_y = 1;	// 초기화: 첫 번째 행부터 시작
	if (x <= 0 || y <= 0)	// 입력받은 xy의 값이 음수거나 0일 때
		return ;	// 종료
	while (map_y <= y)	// 세로 좌표의 값이 입력받은 y의 값보다 작거나 같을 때
	{
		map_x = 1;	// 초기화: 첫 번째 열부터 시작
		while (map_x <= x)	// 가로 좌표의 
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
		ft_putchar('o');
	else if (map_x == 1 && map_y == y)
		ft_putchar('o');
	else if (map_x == x && map_y == 1)
		ft_putchar('o');
	else if (map_x == x && map_y == y)
		ft_putchar('o');
	else if ((map_x == 1 || map_x == x) && (map_y != 1 && map_y != y))
		ft_putchar('|');
	else if ((1 < map_x && map_x < x) && (map_y == 1 || map_y == y))
		ft_putchar('-');
	else
		ft_putchar(' ');
}
