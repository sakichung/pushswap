/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:17:36 by pchung            #+#    #+#             */
/*   Updated: 2025/01/02 15:49:00 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void error_exit(void)
{
    write(2, "Error\n", 6);
    exit(EXIT_FAILURE);
}

int is_valid_number(const char *str)
{
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++; 
    if (str[i] == '\0')
        return 0; 
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return 0; 
        i++;
    }
    return 1;
}

long ft_atoi(const char *str)
{
    long result = 0;
    int sign = 1;
    int i = 0;

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
    return result * sign;
}

size_t ft_strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return len;
}