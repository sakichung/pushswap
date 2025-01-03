/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 22:33:44 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 22:34:20 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		error_exit();
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

void	push_node(t_stack *stack, int value)
{
	t_node	*new_node;

	new_node = create_node(value);
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}
