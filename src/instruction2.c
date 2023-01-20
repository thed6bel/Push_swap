/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucorrei <hucorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:11:56 by hucorrei          #+#    #+#             */
/*   Updated: 2022/12/20 13:50:05 by hucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_push(t_list **stack_to, t_list **stack_from)
{
	t_list	*tmp;
	t_list	*head_to;
	t_list	*head_from;

	head_to = *stack_to;
	head_from = *stack_from;
	tmp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return ;
}

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_putendl_fd("pa", 1);
	return ;
}

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_b, stack_a);
	ft_putendl_fd("pb", 1);
	return ;
}
