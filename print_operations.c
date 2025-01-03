/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:28:05 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 04:24:44 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void print_operations(t_operations *operations)
{
	if (!operations)
		return;

	t_operations *current = operations;

	while (current)
	{
		if (current->operation)
		{
			write(1, current->operation, ft_strlen(current->operation));
			write(1, "\n", 1);
		}
		current = current->next;
	}
}

void add_operation(t_operations **operations, const char *operation)
{
	t_operations *new_op = malloc(sizeof(t_operations));
	if (!new_op)
		return;

	new_op->operation = strdup(operation); // TODO: Fix ft_strdup
	if (!new_op->operation)
	{
		free(new_op);
		return;
	}

	new_op->next = *operations;
	*operations = new_op;
}
