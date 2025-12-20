/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:07:12 by wehan             #+#    #+#             */
/*   Updated: 2025/12/20 20:14:08 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **head)
{
	int	biggest;

	biggest = find_biggest(*head);
	if ((*head)->index == biggest)
		rotate_a(head);
	else if ((*head)->next->index == biggest)
		r_rotate_a(head);
	if ((*head)->index > (*head)->next->index)
		swap_a(head);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = count_nodes(*stack_a);
	while (size > 0)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			push_b(stack_a, stack_b);
		else
			rotate_a(stack_a);
		size--;
	}
	sort_three(stack_a);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
	if ((*stack_a)->index > (*stack_a)->next->index)
		swap_a(stack_a);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	biggest_index;
	int	binary_digits;
	int	i;
	int	j;
	int	size;

	biggest_index = find_biggest(*stack_a);
	binary_digits = count_binary_digits(biggest_index);
	i = 0;
	while (i < binary_digits)
	{
		size = count_nodes(*stack_a);
		j = 0;
		while (j < size)
		{
			if (((*stack_a)->index >> i) & 1)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
		i++;
	}
}
//& 1 only checks the lowest position

void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = count_nodes(*stack_a);
	if (!sorted(stack_a) && size <= 3)
		sort_three(stack_a);
	else if (!sorted(stack_a) && size <= 5)
		sort_five(stack_a, stack_b);
	else if (!sorted(stack_a))
		radix_sort(stack_a, stack_b);
	else
	{
		free_stack(stack_a);
		free_stack(stack_b);
	}
}
