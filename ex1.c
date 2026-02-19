/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:39:08 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/18 14:43:19 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while  (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	char dismoi[] = "ABCD5";

	printf("Il y a : %d caracteres \n", ft_strlen(dismoi));
	return (0);
}
