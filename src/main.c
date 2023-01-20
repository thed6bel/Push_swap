/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucorrei <hucorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:00:21 by hucorrei          #+#    #+#             */
/*   Updated: 2023/01/09 10:19:38 by hucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_init_stack(t_list **stack, int argc, char **argv)
{
	t_list	*new;
	char	**args;
	int		i;

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
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	ft_index_stack(stack);
	if (argc == 2)
		ft_free(args);
}

void	ft_sort_stack(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		ft_easysort(stack_a, stack_b);
	else
		ft_radix_sort(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (-1);
	ft_ctrl_arg(argc, argv);
	stack_a = malloc(sizeof(t_list));
	if (!stack_a)
		return (0);
	stack_b = malloc(sizeof(t_list));
	if (!stack_b)
		return (0);
	*stack_a = NULL;
	*stack_b = NULL;
	ft_init_stack(stack_a, argc, argv);
	if (ft_sort_ok(stack_a))
	{
		ft_free_stack(stack_a);
		ft_free_stack(stack_b);
		return (0);
	}
	ft_sort_stack(stack_a, stack_b);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	return (0);
}
