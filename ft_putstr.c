/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:26:55 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/19 15:33:22 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);

		i++;
	}
}

int	main(void)
{
	char *s = "Heeeelllooooo";
	ft_putstr(s);
	return (0);
}
