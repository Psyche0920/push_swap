/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:23:18 by wehan             #+#    #+#             */
/*   Updated: 2025/12/20 19:59:34 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(t_stack *head, int link_size)
{
	t_stack	*biggest;
	t_stack	*tmp;

	while (link_size > 0)
	{
		biggest = NULL;
		tmp = head;
		while (tmp)
		{
			if (!tmp->index && (biggest == NULL || tmp->value > biggest->value))
				biggest = tmp;
			tmp = tmp->next;
		}
		if (biggest)
			biggest->index = link_size - 1;
		link_size--;
	}
}

void	free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		i = i + 1;
	}
	free(split);
}

t_stack	*init_list(int ac, char **av)
{
	t_stack			*stack_a;
	char			**tmp;
	int				i;

	stack_a = NULL;
	i = 0;
	if (ac == 2)
		tmp = ft_split(av[1], ' ');
	else
	{
		i = 1;
		tmp = av;
	}
	while (tmp[i])
	{
		insert_at_tail(&stack_a, ft_atol(tmp[i]));
		i++;
	}
	if (ac == 2)
		free_split(tmp);
	return (stack_a);
}

//if ac == 2, it's already freed
//here after validity check, it can be ft_atoi?
//"第一个参数应该在栈的顶部（注意顺序）"
//ft_split() 分配的内存 → 你需要释放
//main() 的参数 av → 操作系统分配，你不要释