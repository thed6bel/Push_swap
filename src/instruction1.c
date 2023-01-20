/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucorrei <hucorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:00:42 by hucorrei          #+#    #+#             */
/*   Updated: 2022/12/21 09:33:33 by hucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_swap(t_list **stack)
{
	t_list	*head;
	t_list	*next;
	int		tmp_value;
	int		tmp_index;

	head = *stack;
	next = head->next;
	if (!head || !next)
		ft_error("Error\n");
	tmp_value = head->value;
	tmp_index = head->index;
	head->value = next->value;
	head->index = next->index;
	next->value = tmp_value;
	next->index = tmp_index;
	return ;
}

void	ft_sa(t_list **stack_a)
{
	ft_swap(stack_a);
	ft_putendl_fd("sa", 1);
	return ;
}

void	ft_s3_1(t_list **stack_a)
{
	ft_sa(stack_a);
	ft_ra(stack_a);
}

void	ft_s3_2(t_list **stack_a)
{
	ft_sa(stack_a);
	ft_rra(stack_a);
}
