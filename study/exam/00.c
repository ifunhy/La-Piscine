/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:19:14 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/04 21:19:55 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1, "z\n", 2);
	return (0);
}

void main(void)
{
	write(1, "z", 1);
	write(1, "\n", 1);
	return (0);
}

void main(void)
{
	write(1, "s", 1);
}