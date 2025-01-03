/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:19:51 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 23:40:30 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	parse_input(int argc, char **argv)
{
	long	num;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		if (!is_valid_number(argv[i]))
			return (0); // 数字でない場合
		num = ft_atoi(argv[i]);
		if (num < INT_MIN || num > INT_MAX)
			return (0); // オーバーフロー/アンダーフロー検出
		j = 1;
		while (j < i)
		{
			if (ft_atoi(argv[j]) == num)
				return (0); // 重複検出
			j++;
		}
		i++;
	}
	return (1);
}
