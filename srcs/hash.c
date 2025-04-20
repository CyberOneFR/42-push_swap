/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:51:52 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/14 17:00:09 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	hash_data(t_element *first)
{
	t_element	*last;
	int			i;

	i = 0;
	last = first->prev;
	while (first != last)
	{
		first->tvalue = set_tvalue(first, first->value);
		if (first->tvalue == -1)
		{
			free(last->next);
			write(2, "Error\n", 6);
			return (-1);
		}
		first = first->next;
		++i;
	}
	first->tvalue = set_tvalue(first, first->value);
	return (0);
}

int	set_tvalue(t_element *element, int value)
{
	t_element	*first;
	int			i;

	i = 0;
	first = element->prev;
	if (element == first)
		return (0);
	element = element->next;
	while (element != first)
	{
		if (element->value < value)
			++i;
		if (element->value == value)
			return (-1);
		element = element->next;
	}
	if (element->value < value)
		++i;
	if (element->value == value)
		return (-1);
	return (i);
}
