/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucorrei <hucorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:00:24 by hucorrei          #+#    #+#             */
/*   Updated: 2022/12/21 09:34:00 by hucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

void	ft_sort_stack(t_list **stack_a, t_list **stack_b);

//instructions
void	ft_sa(t_list **stack_a);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list **stack_a);
void	ft_rra(t_list **stack_a);
void	ft_s3_1(t_list **stack_a);
void	ft_s3_2(t_list **stack_a);

//tools
void	ft_error(char *message);
void	ft_free(char **str);
int		ft_sort_ok(t_list **stack);
int		ft_get_dist(t_list **stack, int index);
void	ft_free_stack(t_list **stack);

//control args
void	ft_ctrl_arg(int argc, char **argv);

//simple sort
int		ft_getmin(t_list **stack, int val);
void	ft_sort3(t_list **stack_a);
void	ft_sort4(t_list **stack_a, t_list **stack_b);
void	ft_sort5(t_list **stack_a, t_list **stack_b);
void	ft_easysort(t_list **stack_a, t_list **stack_b);

//index fonctions
void	ft_index_stack(t_list **stack);

//lst fonctions
t_list	*ft_lstnew(int value);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);

//radix sort
int		ft_get_mbits(t_list **stack);
void	ft_radix_sort(t_list **stack_a, t_list **stack_b);

#endif
