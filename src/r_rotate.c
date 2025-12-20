/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 16:02:03 by wehan             #+#    #+#             */
/*   Updated: 2025/12/20 16:30:13 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_ccw(t_stack **head)
{
	t_stack	*old_tail;
	t_stack	*new_tail;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	old_tail = *head;
	while (old_tail->next)
	{
		new_tail = old_tail;
		old_tail = old_tail->next;
	}
	old_tail->next = *head;
	*head = old_tail;
	new_tail->next = NULL;
}

void	r_rotate_a(t_stack **head)
{
	rotate_ccw(head);
	write(1, "rra\n", 4);
}

void	r_rotate_b(t_stack **head)
{
	rotate_ccw(head);
	write(1, "rrb\n", 4);
}

void	r_rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate_ccw(stack_a);
	rotate_ccw(stack_b);
	write(1, "rrr\n", 4);
}
