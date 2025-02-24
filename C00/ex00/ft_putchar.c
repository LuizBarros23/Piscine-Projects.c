/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:02:29 by lbarros           #+#    #+#             */
/*   Updated: 2025/01/24 20:13:18 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// int main(void)
// {
//     ft_putchar('C');
//     ft_putchar('\n');
//     return (0);
// }

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
