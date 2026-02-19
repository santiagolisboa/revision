/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:34:22 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/19 15:45:10 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	jai;
	int	jaurais;

	jai = 29;
	jaurais = 30;

	printf("J'ai %d\n", jai);
	ft_swap(&jai, &jaurais);
	printf("J'aurais %d\n", jai);
	return (0);
}
