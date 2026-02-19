/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FizzBuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:12:36 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/18 15:32:00 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int number)
{
	if (number > 9)
		ft_putnbr(number / 10);
	write(1, &"0123456789"[number %10], 1);
}

int	main(void)
{
	int	number;

	number = 1;
	while (number <=100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if(number % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(number);
		number++;
		write(1, "\n", 1);
	}
	return (0);
}
