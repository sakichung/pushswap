/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:17:36 by pchung            #+#    #+#             */
/*   Updated: 2025/01/03 22:46:12 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	is_perfectly_sorted(t_stack *stack, int size)
{
	int		counter;
	t_node	*current;

	counter = 0;
	current = stack->top;
	while (current && current->next)
	{
		if ((current->value) > current->next->value)
			return (0);
		current = current->next;
		counter++;
	}
	if (counter < size - 1)
		return (0);
	return (1);
}

int	is_valid_number(const char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

long	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		if ((result * sign) > 2147483647 || (result * sign) < -2147483648)
			error_exit();
		i++;
	}
	return (result * sign);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void	ft_printf(const char *str)
{
	write(1, str, ft_strlen(str));
}