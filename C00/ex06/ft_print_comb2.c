/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:05:43 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/12 14:04:18 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);
void	ft_prox_dgts(int n);
void	ft_putnbr(int n);

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }

void	ft_print_comb2(void)
{
	int	g1;
	int	g2;

	g1 = 0;
	while (g1 <= 98)
	{
		g2 = g1 + 1;
		while (g2 <= 99)
		{
			ft_prox_dgts(g1);
			ft_putchar(' ');
			ft_prox_dgts(g2);
			if (!(g1 == 98 && g2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			g2++;
		}
		g1++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_prox_dgts(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(n);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	ft_putchar(c);
}
