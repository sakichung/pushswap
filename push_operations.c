/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 23:22:01 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 05:20:19 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void pa(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b->top >= 0) 
	{
		stack_a->size = stack_a->size + 1;
		stack_b->size = stack_b->size - 1;
		stack_a->data[++stack_a->top] = stack_b->data[stack_b->top--];
		add_operation(&stack_a->operations, "pa");
	}
}

void pb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->top >= 0) 
	{
		stack_a->size = stack_a->size - 1;
		stack_b->size = stack_b->size + 1;
		stack_b->data[++stack_b->top] = stack_a->data[stack_a->top--];
		add_operation(&stack_a->operations, "pb");
	}
}