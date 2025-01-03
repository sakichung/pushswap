/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:58:27 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 05:23:24 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void ra(t_stack *stack)
{
	if (stack->size <= 1)
		return;
	int first = stack->data[0];
	for (int i = 0; i < stack->size - 1; i++)
	{
		stack->data[i] = stack->data[i + 1];
	}
	stack->data[stack->size - 1] = first;
	stack->top = (stack->top - 1 + stack->size) % stack->size;

	add_operation(&stack->operations, "ra");
}

void rb(t_stack *stack)
{
	if (stack->size <= 1)
		return;
	int first = stack->data[0];
	for (int i = 0; i < stack->size - 1; i++)
	{
		stack->data[i] = stack->data[i + 1];
	}
	stack->data[stack->size - 1] = first;
	 add_operation(&stack->operations, "rb");
}

void rr(t_stack *stack_a, t_stack *stack_b, t_stack *stack)
{
	ra(stack_a);
	rb(stack_b);
	add_operation(&stack->operations, "rr");
}

