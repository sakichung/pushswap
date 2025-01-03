/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:17:53 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 23:40:43 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*next;

	if (!stack)
		return ;
	current = stack->top;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	stack->top = NULL;
	stack->size = 0;
	if (stack->data)
	{
		free(stack->data);
		stack->data = NULL;
	}
}

void	check(t_stack *stack_a, t_stack *stack_b, char **argv, int argc)
{
	if (!parse_input(argc, argv))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		ft_printf("invalid input\n");
		error_exit();
	}
	if (is_perfectly_sorted(stack_a, stack_a->size))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		exit(EXIT_SUCCESS);
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc < 2)
		return (0);
	initialize_stacks(&stack_a, &stack_b, argc, argv);
	check(&stack_a, &stack_b, argv, argc);
	sort_stack(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
