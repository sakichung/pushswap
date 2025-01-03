/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse_rotate.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:58:45 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 19:04:31 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_stack *stack_a)
{
	t_node	*tmp;
	t_node	*last;

	if (stack_a->size < 2)
		return ;
	tmp = stack_a->top;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = stack_a->top;
	stack_a->top = last;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack_b)
{
	t_node	*tmp;
	t_node	*last;

	if (stack_b->size < 2)
		return ;
	tmp = stack_b->top;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = stack_b->top;
	stack_b->top = last;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*tmp;
	t_node	*last;

	if (stack_a->size >= 2)
	{
		tmp = stack_a->top;
		while (tmp->next->next)
			tmp = tmp->next;
		last = tmp->next;
		tmp->next = NULL;
		last->next = stack_a->top;
		stack_a->top = last;
	}
	if (stack_b->size >= 2)
	{
		tmp = stack_b->top;
		while (tmp->next->next)
			tmp = tmp->next;
		last = tmp->next;
		tmp->next = NULL;
		last->next = stack_b->top;
		stack_b->top = last;
	}
	write(1, "rrr\n", 4);
}
