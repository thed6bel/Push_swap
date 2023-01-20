/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucorrei <hucorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:00:25 by hucorrei          #+#    #+#             */
/*   Updated: 2023/01/09 11:18:32 by hucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_getmin(t_list **stack, int val)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && (head->index != val))
			min = head->index;
	}
	return (min);
}

void	ft_sort3(t_list **stack_a)
{
	t_list	*head;
	int		min;
	int		nextmin;

	head = *stack_a;
	min = ft_getmin(stack_a, -1);
	nextmin = ft_getmin(stack_a, min);
	if (head->index == min && head->next->index != nextmin)
		ft_s3_1(stack_a);
	else if (head->index == nextmin)
	{
		if (head->next->index == min)
			ft_sa(stack_a);
		else
			ft_rra(stack_a);
	}
	else
	{
		if (head->next->index == min)
			ft_ra(stack_a);
		else
			ft_s3_2(stack_a);
	}
}

void	ft_sort4(t_list **stack_a, t_list **stack_b)
{
	int	dist;

	dist = ft_get_dist(stack_a, ft_getmin(stack_a, -1));
	if (dist == 1)
		ft_ra(stack_a);
	else if (dist == 2)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
	}
	else if (dist == 3)
		ft_rra(stack_a);
	if (ft_sort_ok(stack_a))
		return ;
	ft_pb(stack_a, stack_b);
	ft_sort3(stack_a);
	ft_pa(stack_a, stack_b);
}

void	ft_sort5(t_list **stack_a, t_list **stack_b)
{
	int	dist;

	dist = ft_get_dist(stack_a, ft_getmin(stack_a, -1));
	if (dist == 1)
		ft_ra(stack_a);
	else if (dist == 2)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
	}
	else if (dist == 3)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (dist == 4)
		ft_rra(stack_a);
	if (ft_sort_ok(stack_a))
		return ;
	ft_pb(stack_a, stack_b);
	ft_sort4(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void	ft_easysort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	size = ft_lstsize(*stack_a);
	if (size == 2)
		ft_sa(stack_a);
	else if (size == 3)
		ft_sort3(stack_a);
	else if (size == 4)
		ft_sort4(stack_a, stack_b);
	else if (size == 5)
		ft_sort5(stack_a, stack_b);
}
