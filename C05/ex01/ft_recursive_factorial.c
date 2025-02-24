/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:22:38 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/11 23:43:12 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)


{
	int	result;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	result = nb * ft_recursive_factorial (nb -1);
	return (result);
}

// #include <stdio.h>
// int main (void)
// {
// 	int a = 10;
// 	printf ("%d", ft_recursive_factorial(a));
// }
