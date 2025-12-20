/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 19:28:07 by wehan             #+#    #+#             */
/*   Updated: 2025/12/19 20:00:40 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest(t_stack *head)
{
	int		big;
	t_stack	*tmp;

	big = INT_MIN;
	tmp = head;
	while (tmp)
	{
		if (tmp->index > big)
			big = tmp->index;
		tmp = tmp->next;
	}
	return (big);
}

int	count_binary_digits(int biggest_index)
{
	int	digits;

	digits = 0;
	while (biggest_index > 0)
	{
		biggest_index = biggest_index / 2;
		digits++;
	}
	return (digits);
}

//biggest_index >>= 1; more efficient, faster
