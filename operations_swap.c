/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 23:08:54 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 19:38:25 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_stack *stack_a)
{
	t_node	*tmp;

	if (stack_a->size < 2)
		return ;
	tmp = stack_a->top;
	stack_a->top = stack_a->top->next;
	tmp->next = stack_a->top->next;
	stack_a->top->next = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack_b)
{
	t_node	*tmp;

	if (stack_b->size < 2)
		return ;
	tmp = stack_b->top;
	stack_b->top = stack_b->top->next;
	tmp->next = stack_b->top->next;
	stack_b->top->next = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*tmp;

	if (stack_a->size >= 2)
	{
		tmp = stack_a->top;
		stack_a->top = stack_a->top->next;
		tmp->next = stack_a->top->next;
		stack_a->top->next = tmp;
	}
	if (stack_b->size >= 2)
	{
		tmp = stack_b->top;
		stack_b->top = stack_b->top->next;
		tmp->next = stack_b->top->next;
		stack_b->top->next = tmp;
	}
	write(1, "ss\n", 3);
}
