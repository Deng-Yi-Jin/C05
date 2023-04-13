/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:48:59 by djin              #+#    #+#             */
/*   Updated: 2023/04/13 09:25:21 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i >= 2 && i < nb)
	{
		if (nb % i == 0)
			return (0);
		else
			return (1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_is_prime(7));
}*/
