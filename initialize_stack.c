/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:20:44 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 05:26:24 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void initialize_stack(t_stack *stack_a, t_stack *stack_b)
{
    stack_a->top = stack_a->size - 1;
	stack_a->operations = NULL;
	stack_b->data = (int *)malloc(sizeof(int) * stack_a->size); 
    if (!stack_b->data)
        error_exit();
    stack_b->size = 0; 
    stack_b->top = -1;
	stack_b->operations = NULL;

}