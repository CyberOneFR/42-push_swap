/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:44:17 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/14 17:52:53 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(int *ptr, char *nptr)
{
	long	nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if ((*nptr == '+' || *nptr == '-'))
		sign *= 44 - *nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		nbr = (nbr * 10) + (*nptr++ - 48);
		if ((nbr > 2147483647 && sign == 1)
			|| (nbr > 2147483648 && sign == -1))
			return (-1);
	}
	*ptr = nbr * sign;
	return (0);
}

int	only_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] != '-' || i > 0) && (str[i] < '0' || str[i] > '9'))
			return (-1);
		++i;
	}
	return (0);
}

int	check_args(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (only_digit(av[i]))
		{
			write(2, "Error\n", 6);
			return (-1);
		}
		++i;
	}
	return (0);
}

int	parse_state(t_state *state, int ac, char **av)
{
	t_element	*elements;
	int			i;

	i = 0;
	elements = malloc(ac * sizeof(t_element));
	if (!elements)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	while (i < ac)
	{
		if (ft_atoi(&elements[i].value, av[i]) == -1)
		{
			write(2, "Error\n", 6);
			free(elements);
			return (-1);
		}
		elements[i].next = &(elements[(i + 1 + ac) % ac]);
		elements[i].prev = &(elements[(i - 1 + ac) % ac]);
		++i;
	}
	state->a = &elements[0];
	state->b = NULL;
	return (0);
}
