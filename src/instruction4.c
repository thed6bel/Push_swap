/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucorrei <hucorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:20:15 by hucorrei          #+#    #+#             */
/*   Updated: 2022/12/20 13:50:49 by hucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_rev_rot(t_list **stack)
{
	t_list	*head;
	t_list	*end;

	head = *stack;
	end = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	end->next = *stack;
	*stack = end;
	return ;
}

void	ft_rra(t_list **stack_a)
{
	ft_rev_rot(stack_a);
	ft_putendl_fd("rra", 1);
	return ;
}
