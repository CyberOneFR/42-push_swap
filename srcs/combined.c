/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combined.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 04:42:23 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/10 15:32:44 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_state *state)
{
	state->a = swap(state->a);
	state->b = swap(state->b);
	write(1, "ss\n", 3);
}

void	rr(t_state *state)
{
	state->a = rotate(state->a, 0);
	state->b = rotate(state->b, 0);
	write(1, "rr\n", 3);
}

void	rrr(t_state *state)
{
	state->a = rotate(state->a, 1);
	state->b = rotate(state->b, 1);
	write(1, "rrr\n", 4);
}
