/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:58:36 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/18 15:12:24 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	premier;
	int	dernier;
	int	echange;
	int	taille;
	taille = sizeof(str) / sizeof(str[0]);
	
	premier = 0;
	dernier = taille - 1;

	while (premier < dernier)
	{
		echange = str[premier];
		str[premier] = str[dernier];
		str[premier] = echange;
		premier++;
		dernier--;
	}
}

int	main(void)
{
	int premier
	str[] = "abcde";

	return (0);
}
