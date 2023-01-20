/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucorrei <hucorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:47:11 by hucorrei          #+#    #+#             */
/*   Updated: 2023/01/20 09:14:14 by hucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *message)
{
	ft_putendl_fd(message, 2);
	exit (0);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return ;
}

int	ft_sort_ok(t_list **stack)
{
	t_list	*head;

	if (*stack == NULL)
		return (0);
	head = *stack;
	while (head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

int	ft_get_dist(t_list **stack, int index)
{
	t_list	*head;
	int		dist;

	dist = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		dist++;
		head = head->next;
	}
	return (dist);
}

void	ft_free_stack(t_list **stack)
{
	t_list	*head;
	t_list	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}
