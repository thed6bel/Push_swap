/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:54:16 by hucorrei          #+#    #+#             */
/*   Updated: 2022/10/26 14:43:32 by hucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printchar(int c);
int		ft_printpercent(void);
int		ft_printf(const char *str, ...);
int		ft_printstr(char *str);
void	ft_putnbr(int n);
int		ft_printnbr(int n);
void	ft_putunsigned(unsigned int n);
int		ft_printunsigned(unsigned int n);
int		ft_printptr(unsigned long ptr);
int		ft_ptrlen(unsigned long nbr);
void	ft_putptr(unsigned long nbr);
int		ft_printhex(unsigned int nbr, char format);
int		ft_hexlen(unsigned int nbr);
void	ft_putstr(char *str);
void	ft_puthex(unsigned int num, char format);

#endif
