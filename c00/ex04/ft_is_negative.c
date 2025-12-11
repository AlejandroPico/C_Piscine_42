/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 04:26:02 by user              #+#    #+#             */
/*   Updated: 2025/12/11 15:30:16 by apico-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if(n < 0)
		c = 'N';
	else
		c = 'p';
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_is_negative(42);
	ft_is_negative(-42);
	ft_is_negative(0);
}*/
