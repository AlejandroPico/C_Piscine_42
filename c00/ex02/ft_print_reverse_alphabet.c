/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 04:14:07 by user              #+#    #+#             */
/*   Updated: 2025/12/11 15:58:46 by apico-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	n;

	n = 97;
	while (n >= 'a')
	{
		write(1, &n, 1);
		n--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}*/
