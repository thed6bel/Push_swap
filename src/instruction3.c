/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucorrei <hucorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:13:16 by hucorrei          #+#    #+#             */
/*   Updated: 2022/12/20 13:50:30 by hucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_rotate(t_list **stack)
{
	t_list	*head;
	t_list	*end;

	head = *stack;
	end = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	end->next = head;
	return ;
}

void	ft_ra(t_list **stack_a)
{
	ft_rotate(stack_a);
	ft_putendl_fd("ra", 1);
	return ;
}
