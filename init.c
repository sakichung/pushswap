/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 23:09:03 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 23:30:37 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	init_stack(t_stack *stack, int size)
{
	stack->data = (int *)malloc(sizeof(int) * size);
	if (!stack->data)
		error_exit();
	stack->size = 0;
	stack->top = NULL;
}

void	add_values_to_stack(t_stack *stack, char **argv, int argc)
{
	int	i;
	int	value;

	i = argc-1;
	while (0 < i)
	{
		if (stack->size > argc - 1)
		{
			ft_printf("Error: stack->data overflow\n");
			error_exit();
		}
		value = ft_atoi(argv[i]);
		stack->data[stack->size] = value;
		push_node(stack, value);
		i--;
	}
}

void	initialize_stacks(t_stack *stack_a, t_stack *stack_b, int argc,
		char **argv)
{
	init_stack(stack_a, argc - 1);
	init_stack(stack_b, argc - 1);
	add_values_to_stack(stack_a, argv, argc);
}
