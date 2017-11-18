/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:35:41 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/08 11:20:12 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int i;

	if (0 < nb && nb < 13)
	{
		i = nb * ft_recursive_factorial(nb - 1);
		return (i);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
