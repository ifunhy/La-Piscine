/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyouhele <kyouhele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:43:43 by kyouhele          #+#    #+#             */
/*   Updated: 2024/01/17 23:49:15 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>	// write 사용 위해 <unistd.h> 사용

void	ft_putchar(char c);	// char c를 가진 ft_putchar 파일을 void형으로 변환
void	map(int x, int y, int map_x, int map_y);
// int x, y, map_x, map_y를 가진 map 파일을 void형으로 반환(x,y = 입력값 / map_x, map_y는 현재 출력 중인 좌표)
void	rush(int x, int y);	// int x, y를 가진 rush 파일을 void형으로 반환
int		nb_len(char *str);	// char 포인터 str을 가진 nb_len파일을 int형으로 반환
int		atoi(char *str, int len);
// char 포인터 str, 정수 len을 가진 atoi 파일을 int형으로 반환(len = length)
// 다른 파일에 존재하는 변수 가져오기 + main에서 사용할 함수 작성

int	main(int argc, char *argv[])	
// 메인 함수에 전달되는 정보의 개수와 실질적인 정보를 int형으로 반환
{
	int	x;	// 입력받을 int형 변수 x 선언
	int	y;	// 입력받은 int형 변수 y 선언

	if (argc != 3 && argc != 1)
	// 받은 인자의 개수가 2개가 아니면서 어떠한 값이라도 받았을 때
	/* argc는 사용자가 입력한 개수+1해야 입력한 정보 개수와 동일(인덱스는 0부터 시작), 
	 * argv[0]-항상 실행경로 출력 default값
	ex> touch "a" "b" -> argc = 3, argv[0] = default값, argv[1] = "a", argv[2] = "b" */
		return (0);	// 입력 받은 값이 정수만 존재하는 게 아니면 리턴 0 (= 종료)
	if (argc == 3)	// 입력 받은 값의 개수가 2개인 경우 실행
	{
		if (!nb_len(argv[1]) || !nb_len(argv[2]))
		// nb_len(x)의 값이 0이거나, nb_len(y)의 값이 0일 때
			return (0);	// 0을 반환(= 종료)
			// nb_len에 입력된 값이 숫자가 아니면 종료
			// 입력된 값이 숫자라면 아래 함수 적용
			// atoi(argv[1]~) argv[1] = 문자열, nb_len(argv[1]) = 문자열의 길이
			// 변환하여 전달   후 rush(x,y) 값에 삽입
		x = atoi(argv[1], nb_len(argv[1]));
		// x는 x와 nb_len(x)를 문자열에서 정수타입으로 변환
		y = atoi(argv[2], nb_len(argv[2]));
		// y는 y와 nb_len(y)를 문자열에서 정수타입으로 변환
		// nb_len은 숫자가 아닌 것이 있으면 출력하지 않도록 하기 위함
		rush(x, y);	// rush의 x값과 y값 삽입
	}
	rush(10, 10);
	rush(5, 5);	// 메인함수에 x,y 파라미터를 정상적으로 전달한 경우, xy에 대해 rush 함수를 실행하고 본래 test case에 대해 rush 함수 실행
	return (0);	// 종료
}

int	nb_len(char *str)	// 숫자만 있는지 검사 후 참이라면 길이 반환
{
	int	i;	// 문자열을 확인할 int i 변수 선언
	int	cnt;	// 정수의 개수를 나타낼 int cnt 변수 선언

	i = 0;	// i의 값이 0
	cnt = 0;	// cnt의 값이 0
	while (str[i])	// 반복할 while문 생성. str 배열의 i번째 인덱스 출력
	{
		if(str[i] >= '0' && str[i] <= '9')
		// int로 바꿔줄 수 있는 수를 찾기 위해 str의 i번째 인덱스가 0보다 크거나 같고
		   9보다 작거나 같다면
			cnt++;	// 정수의 개수를 확인할 cnt의 값을 1씩 증가
		i++;	// 문자열을 확인할  i의 값을 1씩 증가
	}
	if (i == cnt)	// 문자열에 숫자밖에 없다면 확인 가능하니까 return값으로 카운트 후 길이 뺌
		return (cnt);	// 정수의 개수 값으로 리턴
	return (0);	// 문자열에 숫자 외 다른 값이 있다면 리턴(=종료)
}

int	atoi(char *str, int len)	/* int형으로 반환된 char *str, int len 변수로 
					   숫자문자열을 정수로 변환*/
{
	if (len > 0)	// 변환한 정수의 길이가 0보다 클 때
		return (10 * atoi(str, len - 1) + (str[len - 1] - '0'));
		// 재귀함수 -> 다시 이해하기
	else	// 변환한 정수의 길이가 0보다 작거나 같을 때
		return (0);	// 음수는 매핑이 안되므로 리턴(=종료)
}
