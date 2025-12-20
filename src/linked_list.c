/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:40:03 by wehan             #+#    #+#             */
/*   Updated: 2025/12/19 18:06:03 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_nodes(t_stack *head)
{
	int	i;

	i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}

//how head->next will get the next address by struct?
t_stack	*make_new_node(long new_value)
{
	t_stack	*new_node;

	new_node = ft_calloc(1, sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = (int)new_value;
	new_node->index = 0;
	new_node->next = NULL;
	return (new_node);
}

void	insert_at_tail(t_stack **head, long new_value)
{
	t_stack	*new_node;
	t_stack	*last;

	new_node = make_new_node(new_value);
	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new_node;
	}
}
//use tmp pointer. otherwise head pointer will be lost 
//and never found afterwards.
//head in theory is not possible to be NULL while &stack_a is 
//pointer pointing to a pointer whose content is NULL.
//这种情况不会发生，因为 &stack_a 不可能是 NULL。& 运算符获取的是变量的内存地址，这个地址在栈上分配，始终有效。
//the new_node check is a problem here.