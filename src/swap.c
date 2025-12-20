/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 16:30:22 by wehan             #+#    #+#             */
/*   Updated: 2025/12/20 17:39:12 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **head)
{
	t_stack	*ha;
	t_stack	*hb;
	t_stack	*hc;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	ha = *head;
	hb = (*head)->next;
	hc = (*head)->next->next;
	*head = hb;
	(*head)->next = ha;
	(*head)->next->next = hc;
}

//✅ 安全检查防止了空链表或单节点链表
//✅ 对于两个节点，hc被赋值为NULL（合法）
//✅ 没有解引用hc（只是使用它的值）

void	swap_a(t_stack **head)
{
	swap(head);
	write(1, "sa\n", 3);
}

void	swap_b(t_stack **head)
{
	swap(head);
	write(1, "sb\n", 3);
}

void	swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
