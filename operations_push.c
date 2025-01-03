/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 23:22:01 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 20:24:33 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*tmp;

	if (stack_b->size == 0)
		return ;
	tmp = stack_b->top;
	stack_b->top = stack_b->top->next;
	tmp->next = stack_a->top;
	stack_a->top = tmp;
	stack_a->size++;
	stack_b->size--;
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*tmp;

	if (stack_a->size == 0)
		return ;
	tmp = stack_a->top;
	stack_a->top = stack_a->top->next;
	tmp->next = stack_b->top;
	stack_b->top = tmp;
	stack_a->size--;
	stack_b->size++;
	write(1, "pb\n", 3);
}
