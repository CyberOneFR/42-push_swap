/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:40:09 by ethebaul          #+#    #+#             */
/*   Updated: 2025/03/24 05:48:07 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_state *state)
{
	if (state->a)
	{
		push(&(state->b), pop(&(state->a)));
	}
	write(1, "pb\n", 3);
}

void	pa(t_state *state)
{
	if (state->b)
	{
		push(&(state->a), pop(&(state->b)));
	}
	write(1, "pa\n", 3);
}
