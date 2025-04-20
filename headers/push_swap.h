/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:50:57 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/14 16:54:16 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_element
{
	int					value;
	int					tvalue;
	struct s_element	*prev;
	struct s_element	*next;
}	t_element;

typedef struct s_state
{
	t_element	*a;
	t_element	*b;
}	t_state;

//utils.c
int			len_str(char *str);
int			print_i(int fd, int n);
int			print_state(t_state *state);
int			print_stack_value(t_element *first);
int			print_stack_tvalue(t_element *first);

//parsing.c
int			only_digit(char *str);
int			ft_atoi(int *ptr, char *nptr);
int			check_args(int ac, char **av);
int			parse_state(t_state *state, int ac, char **av);

//hash.c
int			hash_data(t_element *first);
int			set_tvalue(t_element *element, int value);

//push.c
void		pb(t_state *state);
void		pa(t_state *state);

//rotate.c
t_element	*rotate(t_element *stack, int direction);
void		ra(t_state *state);
void		rb(t_state *state);
void		rra(t_state *state);
void		rrb(t_state *state);

//swap.c
t_element	*swap(t_element *stack);
void		sa(t_state *state);
void		sb(t_state *state);

//combined.c
void		ss(t_state *state);
void		rr(t_state *state);
void		rrr(t_state *state);

//list.c
t_element	*pop(t_element **stack);
int			stack_len(t_element *first);
void		push(t_element **stack, t_element *element);

//struct_utils1.c
int			atv(t_state *state);
int			btv(t_state *state);

//struct_utils2.c
int			antv(t_state *state);
int			anntv(t_state *state);
int			bntv(t_state *state);
int			bnntv(t_state *state);

//struct_utils3.c
int			aptv(t_state *state);
int			apptv(t_state *state);
int			bptv(t_state *state);
int			bpptv(t_state *state);

//sort.c
int			sorted(t_element *element, int size);
void		sort(t_state *state, int size);

//little_sort.c
void		little_sort(t_state *state, int size);
void		sort_3(t_state *state);
void		bubble_sort(t_state *state);

#endif