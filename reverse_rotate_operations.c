/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:58:45 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 05:23:46 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void rra(t_stack *stack)
{
	if (stack->size <= 1)
		return;
	int last = stack->data[stack->size - 1];
	for (int i = stack->size - 1; i > 0; i--)
	{
		stack->data[i] = stack->data[i - 1];
	}
	stack->data[0] = last;
	stack->top = (stack->top + 1) % stack->size;
	add_operation(&stack->operations, "rra");
}

void rrb(t_stack *stack)
{
	if (stack->size <= 1)
		return;
	int last = stack->data[stack->size - 1];
	for (int i = stack->size - 1; i > 0; i--)
	{
		stack->data[i] = stack->data[i - 1];
	}
	stack->data[0] = last;
	add_operation(&stack->operations, "rrb");
}

void rrr(t_stack *stack_a, t_stack *stack_b, t_stack *stack)
{
	rra(stack_a);
	rrb(stack_b);
	add_operation(&stack->operations, "rrr");
}