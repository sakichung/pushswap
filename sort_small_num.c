/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:26:13 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 20:41:03 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_2(t_stack *stack_a)
{
	if (stack_a->top == NULL || stack_a->top->next == NULL)
		return ;
	if (stack_a->top->value > stack_a->top->next->value)
		sa(stack_a);
}

void	reverse_sort_2(t_stack *stack_b)
{
	if (stack_b->top == NULL || stack_b->top->next == NULL)
		return ;
	if (stack_b->top->value < stack_b->top->next->value)
		sb(stack_b);
}

void	sort_3(t_stack *stack_a)
{
	if (stack_a->top == NULL || stack_a->top->next == NULL
		|| stack_a->top->next->next == NULL)
		return ;
	if (stack_a->top->value > stack_a->top->next->value)
		sa(stack_a);
	if (stack_a->top->next->value > stack_a->top->next->next->value)
		rra(stack_a);
	if (stack_a->top->value > stack_a->top->next->value)
		sa(stack_a);
}

void	sort_4(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*current;

	if (stack_a->top == NULL)
		return ;
	pb(stack_a, stack_b);
	sort_3(stack_a);
	while (is_perfectly_sorted(stack_a, 4) == 0)
	{
		if (stack_b->top == NULL)
			rra(stack_a);
		else
		{
			current = stack_a->top;
			while (current->next)
				current = current->next;
			if (current->value < stack_b->top->value || stack_a->top->value
				- 1 == stack_b->top->value)
				pa(stack_a, stack_b);
			else
				rra(stack_a);
		}
	}
}

void	sort_5(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*current;

	if (stack_a->top == NULL || stack_a->top->next == NULL)
		return ;
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	reverse_sort_2(stack_b);
	while (is_perfectly_sorted(stack_a, 5) == 0)
	{
		if (stack_b->top == NULL)
			rra(stack_a);
		else
		{
			current = stack_a->top;
			while (current->next)
				current = current->next;
			if (current->value < stack_b->top->value || stack_a->top->value
				- 1 == stack_b->top->value)
				pa(stack_a, stack_b);
			else
				rra(stack_a);
		}
	}
}
