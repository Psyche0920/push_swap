/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:36:49 by wehan             #+#    #+#             */
/*   Updated: 2025/12/20 19:43:12 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(char **av)
{
	int	i;
	int	j;
	int	nbcount;

	i = 0;
	nbcount = count_arg(av);
	while (i < nbcount)
	{
		j = i + 1;
		while (j < nbcount)
		{
			if (ft_atol(av[i]) == ft_atol(av[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_nbr(char *av)
{
	int	i;

	i = 0;
	if (av[i] == '-' || av[i] == '+')
		i++;
	if (!av[i])
		return (0);
	while (av[i])
	{
		if (!ft_isdigit(av[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_input(int ac, char **av)
{
	int		i;
	long	tmp_av;
	char	**tmp_array;

	if (ac == 2)
	{
		tmp_array = ft_split(av[1], ' ');
		if (!tmp_array)
			error_msg("Error\n");
	}
	else
		tmp_array = av + 1;
	i = 0;
	while (tmp_array[i])
	{
		if (!check_nbr(tmp_array[i]))
			error_msg("Error\n");
		tmp_av = ft_atol(tmp_array[i]);
		if (tmp_av < INT_MIN || tmp_av > INT_MAX)
			error_msg("Error\n");
		i++;
	}
	if (check_dup(tmp_array))
		error_msg("Error\n");
	if (ac == 2)
		free(tmp_array);
}

//first format of nbr, then convert into atol(in case the input more or less than int)
//check_dup only check once
//➜  ~ ./push_swap "1 2 3" "-1 -2 -3"