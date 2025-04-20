/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_utils3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 06:06:11 by ethebaul          #+#    #+#             */
/*   Updated: 2025/03/24 11:44:48 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	aptv(t_state *state)
{
	return (state->a->prev->tvalue);
}

int	apptv(t_state *state)
{
	return (state->a->prev->prev->tvalue);
}

int	bptv(t_state *state)
{
	return (state->b->prev->tvalue);
}

int	bpptv(t_state *state)
{
	return (state->b->prev->prev->tvalue);
}
