/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:57:51 by ethebaul          #+#    #+#             */
/*   Updated: 2025/03/24 07:54:24 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	print_i(int fd, int n)
{
	const char	*base = "9876543210123456789";
	char		tmp[12];
	size_t		i;

	i = 12;
	tmp[--i] = 0;
	while (n != 0 || i == 11)
	{
		tmp[--i] = base[(n % 10) + 9];
		if (n < 0 && n > -10)
			tmp[--i] = '-';
		n /= 10;
	}
	return (write(fd, &tmp[i], 11 - i));
}

int	print_stack_value(t_element *first)
{
	t_element	*last;

	if (!first)
		return (0);
	last = first->prev;
	while (first != last)
	{
		if (print_i(2, first->value) == -1)
			return (-1);
		if (write(2, ", ", 2) == -1)
			return (-1);
		first = first->next;
	}
	if (print_i(2, first->value) == -1)
		return (-1);
	return (0);
}

int	print_stack_tvalue(t_element *first)
{
	t_element	*last;

	if (!first)
		return (0);
	last = first->prev;
	while (first != last)
	{
		if (print_i(2, first->tvalue) == -1)
			return (-1);
		if (write(2, ", ", 2) == -1)
			return (-1);
		first = first->next;
	}
	if (print_i(2, first->tvalue) == -1)
		return (-1);
	return (0);
}

int	print_state(t_state *state)
{
	if (write(2, "------------------------------\n", 31) == -1)
		return (-1);
	if (write(2, "A value: [", 10) == -1)
		return (-1);
	if (print_stack_value(state->a) == -1)
		return (-1);
	if (write(2, "]\nA order: [", 12) == -1)
		return (-1);
	if (print_stack_tvalue(state->a) == -1)
		return (-1);
	if (write(2, "]\nB value: [", 12) == -1)
		return (-1);
	if (print_stack_value(state->b) == -1)
		return (-1);
	if (write(2, "]\nB order: [", 12) == -1)
		return (-1);
	if (print_stack_tvalue(state->b) == -1)
		return (-1);
	if (write(2, "]\n", 2) == -1)
		return (-1);
	return (0);
}
