/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:50:23 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/19 13:59:23 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_numbers(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_print_numbers(nb / 10);
		ft_print_numbers(nb % 10);
	}
	
}

int	main(void)
{
	ft_print_numbers(-12121);
	return (0);
}
