/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_smallnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:26:13 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 05:37:11 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int find_min(t_stack *stack)
{
	if (stack->top < 0) 
		return -1;		
	int min = stack->data[stack->top];
	for (int i = stack->top - 1; i >= 0; i--)
	{
		if (stack->data[i] < min)
			min = stack->data[i];
	}
	return min;
}

int find_min_index(t_stack *stack, int min)
{
	for (int i = 0; i < stack->size; i++)
	{
		if (stack->data[i] == min)
			return i;
	}
	return -1; 
}

void sort_five(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size > 3)
	{
		int min = find_min(stack_a); 
		if (min == -1)
			return;

		int index = find_min_index(stack_a, min);
		if (stack_a->top - index <= index + 1)
		{
			while (stack_a->data[stack_a->top] != min)
				rra(stack_a);
		}
		else
		{
			while (stack_a->data[stack_a->top] != min) // TODO: FIx this infiniloop
				ra(stack_a);
		}
		pb(stack_a, stack_b);
	}

	sort_three(stack_a); 

	while (stack_b->size > 0)
		pa(stack_a, stack_b);
}

void sort_three(t_stack *stack)
{
	int a = stack->data[stack->top];
	int b = stack->data[stack->top - 1];
	int c = stack->data[stack->top - 2];

	if (a < b && b < c)
		return; 

	if (a > b && b > c)
	{
		sa(stack);
		rra(stack);
	}
	else if (a > c && c > b)
	{
		ra(stack);
	}
	else if (b > a && a > c)
	{
		sa(stack);
	}
	else if (b > c && c > a)
	{
		rra(stack);
	}
	else if (c > a && a > b)
	{
		sa(stack);
		ra(stack);
	}
}
