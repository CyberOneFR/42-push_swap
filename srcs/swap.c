/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:40:02 by ethebaul          #+#    #+#             */
/*   Updated: 2025/03/24 05:30:08 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element	*swap(t_element *stack)
{
	if (stack)
	{
		stack->next->next->prev = stack;
		stack->prev->next = stack->next;
		stack->next->prev = stack->prev;
		stack->prev = stack->next;
		stack->next = stack->next->next;
		stack->prev->next = stack;
		stack = stack->prev;
	}
	return (stack);
}

void	sa(t_state *state)
{
	state->a = swap(state->a);
	write(1, "sa\n", 3);
}

void	sb(t_state *state)
{
	state->b = swap(state->b);
	write(1, "sb\n", 3);
}
