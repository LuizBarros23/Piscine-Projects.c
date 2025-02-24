/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:07:34 by lbarros           #+#    #+#             */
/*   Updated: 2025/01/29 16:01:16 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
// {
// 	int a = 10;
// 	int b = 3;

// 	printf("antes: a = %d, b = %d\n", a, b);
// 	ft_ultimade_div_mod(&a, &b);

// 	printf("depois:a = %d || b=%d\n", a, b);

// 	return (0);	
// }
