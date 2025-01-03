/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:18:11 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 05:12:39 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_stack
{
    int *data;
    int size;
    int top;
	struct s_operations *operations;
} t_stack;

typedef struct s_operations
{
    char *operation;           
    struct s_operations *next; 
} t_operations;

void sa(t_stack *stack_a);
void sb(t_stack *stack_a, t_stack *stack_b);
void ss(t_stack *stack_a, t_stack *stack_b);
void pa(t_stack *stack_a, t_stack *stack_b) ;
void pb(t_stack *stack_a, t_stack *stack_b) ;
void rra(t_stack *stack) ;
void rrb(t_stack *stack) ;
void rrr(t_stack *stack_a, t_stack *stack_b,t_stack *stack) ;
void ra(t_stack *stack) ;
void rb(t_stack *stack) ;
void rr(t_stack *stack_a, t_stack *stack_b, t_stack *stack);
void parse_input(int argc, char **argv, t_stack *stack);
void initialize_stack(t_stack *stack_a, t_stack *stack_b);
int get_bit(int num, int bit_position);
void radix_sort(t_stack *stack_a, t_stack *stack_b);
void sort_stack(t_stack *stack_a, t_stack *stack_b);
void sort_three(t_stack *stack);
void sort_five(t_stack *stack_a, t_stack *stack_b) ;
int find_min(t_stack *stack) ;
void error_exit(void);
int is_valid_number(const char *str);
long ft_atoi(const char *str);
size_t ft_strlen(const char *str);
void print_operations(t_operations *operations);
void add_operation(t_operations **operations, const char *operation);
#endif