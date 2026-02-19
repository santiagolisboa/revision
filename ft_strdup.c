/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:44:36 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/19 16:58:54 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;

	while (str[len])
	{
		len++;
	}
	return(len);
}

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*dup;

	i = 0;
	dup = 0;

	if (src ==0)
		return (0);
	len = ft_strlen(src);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == 0)
		return (0);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	int	i;
	char	*dup;
	char	*src;

	i = 0;
	src = "Santiago";
	dup = ft_strdup(src);
	while(dup[i])
	{
		printf("%c", dup[i]);
		i++;
	}
	free(dup);
	dup = 0;
	return (0);
}
