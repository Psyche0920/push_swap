/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:12:24 by wehan             #+#    #+#             */
/*   Updated: 2025/12/20 16:01:44 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_cw(t_stack **head)
{
	t_stack	*tail;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	tail = *head;
	while (tail->next)
		tail = tail->next;
	tail->next = *head;
	*head = (*head)->next;
	tail->next->next = NULL;
}
//确实，空栈或单节点栈已经是有序的，不需要排序
//while (tail->next != NULL)  // 访问NULL->next → 段错误
//tail->next->next = NULL; // 访问NULL->next → 段错误！
//what happened after returning to the main function?

void	rotate_a(t_stack **head)
{
	rotate_cw(head);
	write(1, "ra\n", 3);
}

void	rotate_b(t_stack **head)
{
	rotate_cw(head);
	write(1, "rb\n", 3);
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate_cw(stack_a);
	rotate_cw(stack_b);
	write(1, "rr\n", 3);
}
