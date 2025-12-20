/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:46:36 by wehan             #+#    #+#             */
/*   Updated: 2025/12/20 20:08:11 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
// #include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

// initialisation

t_stack		*init_list(int argc, char **argv);
void		set_index(t_stack *head, int list_size);

// linked list functions

int			count_nodes(t_stack *head);
// void		print_list(t_stack *head);
void		insert_at_tail(t_stack **head, long new_value);
t_stack		*make_new_node(long new_value);

// instructions

void		swap(t_stack **head);
void		swap_a(t_stack **head);
void		swap_b(t_stack **head);
void		swap_ab(t_stack **stack_a, t_stack **stack_b);
void		push(t_stack **stack_from, t_stack **stack_to);
void		push_a(t_stack **stack_a, t_stack **stack_b);
void		push_b(t_stack **stack_a, t_stack **stack_b);
void		rotate_cw(t_stack **head);
void		rotate_a(t_stack **head);
void		rotate_b(t_stack **head);
void		rotate_ab(t_stack **stack_a, t_stack **stack_b);
void		rotate_ccw(t_stack **head);
void		r_rotate_a(t_stack **head);
void		r_rotate_b(t_stack **head);
void		r_rotate_ab(t_stack **stack_a, t_stack **stack_b);

// sorting

int			find_biggest(t_stack *head);
int			count_binary_digits(int biggest_index);
void		sort_three(t_stack **head);
void		sort_five(t_stack **stack_a, t_stack **stack_b);
void		radix_sort(t_stack **stack_a, t_stack **stack_b);
void		sort_stack(t_stack **stack_a, t_stack **stack_b);
int			sorted(t_stack **head);

// input checks

void		check_input(int argc, char **argv);
int			check_nbr(char *argv);
int			check_doubles(char **argv);

// miscellaneous

void		error_msg(char *str);
int			count_arg(char **array);
long		ft_atol(const char *nptr);
void		free_stack(t_stack **head);

#endif
//have to check the systematic difference between a struct tag and a struct type