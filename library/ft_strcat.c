/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdobrec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 13:40:47 by bdobrec           #+#    #+#             */
/*   Updated: 2016/08/23 14:06:40 by bdobrec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int s;

	i = 0;
	s = 0;
	while (dest[s] != '\0')
		s++;
	while (src[i] != '\0')
	{
		dest[s] = src[i];
		s++;
		i++;
	}
	dest[s] = '\0';
	return (dest);
}
