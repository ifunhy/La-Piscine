/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjiki <hyunjiki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:43:30 by hyunjiki          #+#    #+#             */
/*   Updated: 2024/02/05 01:43:21 by hyunjiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_join_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	str_len;
	int	sep_len;

	str_len = 0;
	sep_len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			str_len++;
		}
		i++;
	}
	while (sep[sep_len])
		sep_len++;
	return (str_len + ((size - 1) * sep_len));
}

void	ft_make_join(int len, char **strs, char *sep, char *join)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < len)
	{
		j = 0;
		while (strs[k][j] && i < len)
		{
			join[i] = strs[k][j];
			j++;
			i++;
		}
		k++;
		j = 0;
		while (sep[j] && i < len)
		{
			join[i] = sep[j];
			j++;
			i++;
		}
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*join;

	i = 0;
	if (size == 0)
	{
		join = (char *)malloc(sizeof(char) * 1);
		join[0] = 0;
		return (join);
	}
	len = ft_join_len(size, strs, sep);
	join = (char *)malloc(sizeof(char) * (len + 1));
	if (!join)
		return (0);
	ft_make_join(len, strs, sep, join);
	return (join);
}
