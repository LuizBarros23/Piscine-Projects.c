/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:42:02 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/09 19:36:38 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (result);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb = nb - 1;
	}
	return (result);
}

// #include <stdio.h>

// int main (void)
// {
// 	int a = 10;
// 	printf("%d", ft_iterative_factorial(a));
// 	return(0);
// }