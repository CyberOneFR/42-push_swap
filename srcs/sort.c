/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:52:06 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/10 15:22:59 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_state *state, int size)
{
	int	i;
	int	bit;

	bit = 0;
	if (size < 6)
		little_sort(state, size);
	else
	{
		while (!sorted(state->a, size))
		{
			i = 0;
			while (i < size)
			{
				if (state->a && atv(state) & (0x1 << bit))
					ra(state);
				else
					pb(state);
				i++;
			}
			while (state->b)
				pa(state);
			bit++;
		}
	}
}

int	sorted(t_element *element, int size)
{
	t_element	*first;

	first = element;
	if (element->next == first)
		return (1);
	element = element->next;
	if (first->tvalue != 0)
		return (0);
	while (element != first)
	{
		if (((element->tvalue + 1) % size) != element->next->tvalue)
			return (0);
		element = element->next;
	}
	if (((element->tvalue + 1) % size) != element->next->tvalue)
		return (0);
	return (1);
}
