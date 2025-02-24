/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:22:50 by lbarros           #+#    #+#             */
/*   Updated: 2025/01/28 19:48:06 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

// int	main (void)
// {
// 	int x = 5;
// 	int y = 10;

// 	printf("antes de fazer a troca: x = %d, y = %d\n", x, y);
// 	ft_swap(&x, &y);
// 	printf("depois de fazer a troca: x = %d, y = %d\n", x, y);

// 	return (0);	
// }
