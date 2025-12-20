/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   supporting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:47:34 by wehan             #+#    #+#             */
/*   Updated: 2025/12/20 19:47:24 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
	exit (1);
}
// check_input，main继续执行！exit() 会立即关闭整个程序

int	sorted(t_stack **head)
{
	t_stack	*tmp;

	tmp = *head;
	while (tmp && tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	free_stack(t_stack **head)
{
	t_stack	*tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}

int	count_arg(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

long	ft_atol(const char *nptr)
{
	long	i;
	int		sign;

	sign = 1;
	while (*nptr == 32 || (9 <= *nptr && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -sign;
		nptr++;
		if (*nptr < '0' || *nptr > '9' )
			return (0);
	}
	i = 0;
	while ('0' <= *nptr && *nptr <= '9')
	{
		i = i * 10 + (*nptr - '0');
		nptr++;
	}
	return (i * sign);
}
