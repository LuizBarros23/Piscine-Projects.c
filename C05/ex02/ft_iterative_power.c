/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:34:22 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/11 23:43:20 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	a;

	a = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (a < power)
	{
		result = result * nb;
		a++;
	}
	return (result);
}

// #include <stdio.h>
// int main (void)
// {
// 	int a = 5;
// 	int b = 2;

// 	printf("%d", ft_iterative_power(a, b));
// }