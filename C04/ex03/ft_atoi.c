/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:26:38 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/09 14:45:42 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			a *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		b = b * 10 + *str - '0';
		str++;
	}
	return (b * a);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "-1j";
// 	int resultado;

// 	resultado = ft_atoi(str);
// 	printf("Coverti aqui men: %d\n", resultado);
// 	return 0;
// }