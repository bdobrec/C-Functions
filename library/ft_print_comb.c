/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdobrec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:15:56 by bdobrec           #+#    #+#             */
/*   Updated: 2016/08/23 14:21:25 by bdobrec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_digits(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	if (x != '7' && y != '8' && z != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = '0';
	while (x <= '7')
	{
		y = '1';
		while (y <= '8')
		{
			z = '2';
			while (z <= '9')
			{
				if (x != y && y != z && x != z)
					ft_print_digits(x, y, z);
				z++;
			}
			y++;
		}
		x++
	}
}
