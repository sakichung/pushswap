/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:58:27 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 19:06:28 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_stack *stack_a)
{
	t_node	*first;
	t_node	*last;

	if (stack_a->size < 2)
		return ;
	first = stack_a->top;
	stack_a->top = stack_a->top->next;
	last = stack_a->top;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack_b)
{
	t_node	*first;
	t_node	*last;

	if (stack_b->size < 2)
		return ;
	first = stack_b->top;
	stack_b->top = stack_b->top->next;
	last = stack_b->top;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*first;
	t_node	*last;

	if (stack_a->size >= 2)
	{
		first = stack_a->top;
		stack_a->top = stack_a->top->next;
		last = stack_a->top;
		while (last->next)
			last = last->next;
		last->next = first;
		first->next = NULL;
	}
	if (stack_b->size >= 2)
	{
		first = stack_b->top;
		stack_b->top = stack_b->top->next;
		last = stack_b->top;
		while (last->next)
			last = last->next;
		last->next = first;
		first->next = NULL;
	}
	write(1, "rr\n", 3);
}
