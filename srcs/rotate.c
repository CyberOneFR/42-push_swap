/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:40:00 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/10 15:09:33 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element	*rotate(t_element *stack, int direction)
{
	if (stack)
	{
		if (direction)
			return (stack->prev);
		return (stack->next);
	}
	return (stack);
}

void	ra(t_state *state)
{
	state->a = rotate(state->a, 0);
	write(1, "ra\n", 3);
}

void	rb(t_state *state)
{
	state->b = rotate(state->b, 0);
	write(1, "rb\n", 3);
}

void	rra(t_state *state)
{
	state->a = rotate(state->a, 1);
	write(1, "rra\n", 4);
}

void	rrb(t_state *state)
{
	state->b = rotate(state->b, 1);
	write(1, "rrb\n", 4);
}
