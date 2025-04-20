/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_utils2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 06:05:47 by ethebaul          #+#    #+#             */
/*   Updated: 2025/03/24 11:44:21 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	antv(t_state *state)
{
	return (state->a->next->tvalue);
}

int	anntv(t_state *state)
{
	return (state->a->next->next->tvalue);
}

int	bntv(t_state *state)
{
	return (state->b->next->tvalue);
}

int	bnntv(t_state *state)
{
	return (state->b->next->next->tvalue);
}
