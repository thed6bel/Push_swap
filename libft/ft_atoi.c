/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucorrei <hucorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:18:57 by hucorrei          #+#    #+#             */
/*   Updated: 2023/01/10 14:08:41 by hucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atoi(const char *nptr)
{
	int		i;
	long	signe;
	long	nbr;

	i = 0;
	signe = 1;
	nbr = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == '\f' )
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe *= -1;
		i++;
		if (nptr[i] == '-' || nptr[i] == '+')
			return (0);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		nbr = nptr[i++] - '0' + (nbr * 10);
	return (signe * nbr);
}
