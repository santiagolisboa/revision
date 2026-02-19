/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:43:53 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/18 14:57:10 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 5;

	ft_swap(&a, &b);
	printf("resultats : %d \n", a);
	printf("resultats : %d \n", b);
	return (0);
}
