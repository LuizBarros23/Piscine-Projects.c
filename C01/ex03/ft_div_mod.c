/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:21:38 by lbarros           #+#    #+#             */
/*   Updated: 2025/01/28 19:49:23 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int a = 10;
// 	int b = 3;
// 	int div, mod;

// 	ft_div_mod(a, b, &div, &mod);

// 	printf("divisao: %d\n", div);
// 	printf("modulo: %d\n", mod);

// 	return (0);
// }