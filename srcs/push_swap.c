/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:50:09 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/14 17:08:01 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_state		state;
	t_element	*mem;

	++av;
	--ac;
	if (ac == 0)
		return (0);
	if (check_args(ac, av) == -1)
		return (-1);
	if (parse_state(&state, ac, av) == -1)
		return (-1);
	if (hash_data(state.a) == -1)
		return (-1);
	mem = state.a;
	sort(&state, ac);
	free(mem);
	return (0);
}
