/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:18:11 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 23:40:55 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <ctype.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	int				*data;
	int				size;
	t_node			*top;
}					t_stack;

void				pa(t_stack *stack_a, t_stack *stack_b);
void				pb(t_stack *stack_a, t_stack *stack_b);
void				rra(t_stack *stack_a);
void				rrb(t_stack *stack_b);
void				rrr(t_stack *stack_a, t_stack *stack_b);
void				ra(t_stack *stack_a);
void				rb(t_stack *stack_b);
void				rr(t_stack *stack_a, t_stack *stack_b);
void				sa(t_stack *stack_a);
void				sb(t_stack *stack_b);
void				ss(t_stack *stack_a, t_stack *stack_b);
int					parse_input(int argc, char **argv);
void				initialize_stacks(t_stack *stack_a, t_stack *stack_b,
						int argc, char **argv);
int					get_bit(int num, int bit_position);
void				sort_stack(t_stack *stack_a, t_stack *stack_b);
void				sort_small_stack(t_stack *stack_a, t_stack *stack_b);
int					find_min(t_stack *stack);
int					find_min_index(t_stack *stack);
void				error_exit(void);
int					is_valid_number(const char *str);
long				ft_atoi(const char *str);
size_t				ft_strlen(const char *str);
void				ft_printf(const char *str);
int					is_perfectly_sorted(t_stack *stack, int size);
void				sort_2(t_stack *stack_a);
void				reverse_sort_2(t_stack *stack_b);
void				sort_3(t_stack *stack_a);
void				sort_4(t_stack *stack_a, t_stack *stack_b);
void				sort_5(t_stack *stack_a, t_stack *stack_b);
int					is_sorted(t_stack *stack);
void				setup_stack_top(t_stack *stack);
t_node				*create_node(int value);
void				push_node(t_stack *stack, int value);
void				initialize_stacks(t_stack *stack_a, t_stack *stack_b,
						int argc, char **argv);
void				add_values_to_stack(t_stack *stack, char **argv, int argc);
void				init_stack(t_stack *stack, int size);

#endif