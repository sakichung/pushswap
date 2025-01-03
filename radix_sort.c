/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:23:25 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 04:57:20 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"


int get_bit(int num, int bit_position)
{
    return (num >> bit_position) & 1;
}

void radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int max_bits = 0;
	int i;

	for (i = 0; i < stack_a->size; i++)
	{
		int num = stack_a->data[i];
		while ((num >> max_bits) != 0)
			max_bits++;
	}

	
	for (i = 0; i < max_bits; i++)
	{
		int count = stack_a->size;

		while (count--)
		{
			
			if (get_bit(stack_a->data[stack_a->top], i) == 0)
				pb(stack_a, stack_b); 
			else
				ra(stack_a); 
		}

		
		while (stack_b->top >= 0)
			pa(stack_a, stack_b); 
	}
}

void sort_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size <= 1)
		return;
	else if (stack_a->size == 2)
	{
		if (stack_a->data[stack_a->top] > stack_a->data[stack_a->top - 1])
			sa(stack_a); 
	}
	else if (stack_a->size == 3)
	{
		sort_three(stack_a);
	}
	else if (stack_a->size <= 5)
	{
		sort_five(stack_a, stack_b);
	}
	else
	{
		radix_sort(stack_a, stack_b);
	}
}
