/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:23:25 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 20:14:59 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int		max_bits;
	t_node	*current;
	int		num;
	int		count;
	int		value;

	max_bits = 0;
	current = stack_a->top;
	while (current)
	{
		num = current->value;
		while (num >> max_bits)
			max_bits++;
		current = current->next;
	}
	for (int i = 0; i < max_bits; i++)
	{
		count = stack_a->size;
		while (count--)
		{
			value = stack_a->top->value;
			if (((value >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
		}
		while (stack_b->top)
			pa(stack_a, stack_b);
	}
}

void	sort_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 2)
	{
		sort_2(stack_a);
	}
	else if (stack_a->size == 3)
	{
		sort_3(stack_a);
	}
	else if (stack_a->size == 4)
	{
		sort_4(stack_a, stack_b);
	}
	else if (stack_a->size == 5)
	{
		sort_5(stack_a, stack_b);
	}
	else
	{
		radix_sort(stack_a, stack_b);
	}
}
