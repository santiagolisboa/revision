/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Strepy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:50:05 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/19 14:59:10 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;
	return (s1);
}

int	main(void)
{
	char	dest[200];
	char src[] = "Hello";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
