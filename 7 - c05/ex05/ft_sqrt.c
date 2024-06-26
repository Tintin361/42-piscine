/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qupollet <qupollet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:49:26 by qupollet          #+#    #+#             */
/*   Updated: 2024/04/01 19:17:15 by qupollet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	total;

	i = 1;
	total = 0;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		nb -= i;
		i += 2;
		total++;
	}
	if (nb < 0)
		return (0);
	return (total);
}
