/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:38:10 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/05 01:13:56 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str1[] = "13443" , str2[] ="13343";
// 	int nbr = 4;
// 	printf("resultado: %d \n\n", ft_strncmp(str1, str2, nbr));
// 	printf("resultado esperado: %d \n", strncmp(str1, str2, nbr));
// }