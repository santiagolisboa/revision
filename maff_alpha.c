/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:09:07 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/19 14:19:26 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	maff_alpha()
{
	char	alpha;
	int	i;
	
	i = 1;
	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha % 2 ==0)
			write(1, & (char){alpha - 32}, 1);
		else
			write(1, &alpha, 1);
		alpha++;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}


int	main(void)
{
	maff_alpha();
	return (0);
}
