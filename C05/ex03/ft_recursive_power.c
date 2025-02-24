/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:04:46 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/09 21:24:36 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = result * ft_recursive_power(result, power -1);
	return (result);
}

// #include <stdio.h>
// int main (void)
// {
// 	int a = 5;
// 	int p = 3;

// 	printf("%d", ft_recursive_power(a, p));
// }