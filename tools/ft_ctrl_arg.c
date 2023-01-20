/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctrl_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucorrei <hucorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:13:08 by hucorrei          #+#    #+#             */
/*   Updated: 2023/01/12 10:39:10 by hucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_double_ctrl(int nbr, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == nbr)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_is_num(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[0] == '-' || nbr[0] == '+')
		i++;
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i++]))
			return (0);
	}
	return (1);
}

void	ft_ctrl_arg(int argc, char **argv)
{
	int				i;
	long long int	tmp;
	char			**args;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!ft_is_num(args[i]))
			ft_error("Error");
		if (ft_double_ctrl(tmp, args, i))
			ft_error("Error");
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error("Error");
		i++;
	}
	if (argc == 2)
		ft_free(args);
}
