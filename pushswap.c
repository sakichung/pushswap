/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:17:53 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 04:11:14 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void free_stack(t_stack *stack)
{
	if (!stack)
		return;

	if (stack->operations)
	{
		t_operations *temp = stack->operations;
		stack->operations = stack->operations->next;

		if (temp->operation)
			free(temp->operation); 
		free(temp); 
	}

	if (stack->data)
	{
		free(stack->data);
		stack->data = NULL;
	}
}

int main(int argc, char **argv)
{
    t_stack stack_a, stack_b;

    parse_input(argc, argv, &stack_a);
    initialize_stack(&stack_a, &stack_b);

    sort_stack(&stack_a, &stack_b);

	print_operations(stack_a.operations);
    free_stack(&stack_a);
    free_stack(&stack_b);

	return 0;
}