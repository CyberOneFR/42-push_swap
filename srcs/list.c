/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:25:05 by ethebaul          #+#    #+#             */
/*   Updated: 2025/03/26 01:46:29 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_element **stack, t_element *element)
{
	if ((*stack) == NULL)
	{
		element->next = element;
		element->prev = element;
	}
	else
	{
		(*stack)->prev->next = element;
		element->prev = (*stack)->prev;
		(*stack)->prev = element;
		element->next = (*stack);
	}
	(*stack) = element;
}

t_element	*pop(t_element **stack)
{
	t_element	*element;

	element = (*stack);
	if (element->next == element)
		(*stack) = NULL;
	else
	{
		(*stack)->prev->next = (*stack)->next;
		(*stack)->next->prev = (*stack)->prev;
		(*stack) = element->next;
	}
	return (element);
}

int	stack_len(t_element *first)
{
	t_element	*element;
	int			len;

	if (!first)
		return (0);
	len = 1;
	element = first->next;
	while (element != first)
	{
		len++;
		element = element->next;
	}
	return (len);
}
