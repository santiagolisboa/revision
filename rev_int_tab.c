/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_int_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:47:59 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/19 16:01:10 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	i;

	i = 0;
	rev_int_tab(tab, 5);
	
	while (i < 5)
	{
		printf("%d", tab[i]);
		if (i != 4)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
