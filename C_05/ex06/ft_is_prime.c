/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:44:33 by nchee             #+#    #+#             */
/*   Updated: 2022/06/05 15:44:48 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	base;

	if (nb < 2)
		return (0);
	base = 2;
	while (base <= nb / 2)
	{
		if (nb % base == 0)
		{
			return (0);
		}
		base++;
	}
	return (1);
}