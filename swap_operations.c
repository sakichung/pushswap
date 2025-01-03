/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 23:08:54 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 05:12:06 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"


void sa(t_stack *stack_a)
{
	if (stack_a->top > 0) 
	{
		int temp = stack_a->data[stack_a->top];
		stack_a->data[stack_a->top] = stack_a->data[stack_a->top - 1];
		stack_a->data[stack_a->top - 1] = temp;
	}
	add_operation(&stack_a->operations, "sa");
}

void sb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b->top > 0) 
	{
		int temp = stack_b->data[stack_b->top];
		stack_b->data[stack_b->top] = stack_b->data[stack_b->top - 1];
		stack_b->data[stack_b->top - 1] = temp;
	}
	add_operation(&stack_a->operations, "sa");
}


void ss(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->top > 0)
	{
		int temp = stack_a->data[stack_a->top];
		stack_a->data[stack_a->top] = stack_a->data[stack_a->top - 1];
		stack_a->data[stack_a->top - 1] = temp;
	}
	if (stack_b->top > 0)
	{
		int temp = stack_b->data[stack_b->top];
		stack_b->data[stack_b->top] = stack_b->data[stack_b->top - 1];
		stack_b->data[stack_b->top - 1] = temp;
	}
	add_operation(&stack_a->operations, "ss");
}