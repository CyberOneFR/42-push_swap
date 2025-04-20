/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:02:01 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/10 15:21:56 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	little_sort(t_state *state, int size)
{
	if (sorted(state->a, size))
		return ;
	else if (size == 2)
		sa(state);
	else if (size == 3)
		sort_3(state);
	else if (size > 3)
		bubble_sort(state);
}

void	sort_3(t_state *state)
{
	if (atv(state) == 2)
		ra(state);
	else if (antv(state) == 2)
		rra(state);
	if (antv(state) == 0)
		sa(state);
	return ;
}

void	bubble_sort(t_state *state)
{
	while (stack_len(state->b) < 2)
	{
		if (atv(state) < 2)
			pb(state);
		else
			ra(state);
	}
	if (btv(state) == 0)
		sb(state);
	if (anntv(state) != 4)
	{
		if (atv(state) == 4)
			ra(state);
		else
			rra(state);
	}
	if (atv(state) > antv(state))
		sa(state);
	while (state->b)
		pa(state);
}
