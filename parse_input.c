/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:19:51 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 04:56:47 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void parse_input(int argc, char **argv, t_stack *stack)
{
	int i, j;
	long num;

	if (argc < 2)
		error_exit();

	stack->size = argc - 1;
	stack->data = (int *)malloc(sizeof(int) * stack->size); 
	if (!stack->data)
		error_exit();

	i = 0;
	while (++i < argc)
	{
		if (!is_valid_number(argv[i]))
			error_exit();

		num = ft_atoi(argv[i]);
		if (num < INT_MIN || num > INT_MAX) 
			error_exit();

		for (j = 0; j < i - 1; j++)
		{
			if (stack->data[j] == (int)num)
				error_exit();
		}
		stack->data[i - 1] = (int)num; 
	}
}
