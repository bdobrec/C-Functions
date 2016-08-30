/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdobrec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:11:57 by bdobrec           #+#    #+#             */
/*   Updated: 2016/08/23 14:12:57 by bdobrec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_number(void)
{
	char nb;

	nb = '0';
	while (nb < '9')
	{
		ft_putchar(nb);
		nb++;
	}
}
