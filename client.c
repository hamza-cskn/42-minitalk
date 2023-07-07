/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 12:14:06 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/07 12:41:05 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

int	get_bit(char c, int bit_index)
{
	return (c >> bit_index & 0b00000001);
}

int	main(int ac, char **av)
{
	int		pid;
	int		byte_index;
	int		bit_index;
	int		bit;
	char	*str;

	(void) ac;
	pid = ft_atoi(av[1]);
	byte_index = 0;
	str = av[2];
	while (str[byte_index])
	{
		bit_index = 0;
		while (bit_index < 8)
		{
			bit = get_bit(str[byte_index], bit_index);
			kill(pid, SIGUSR1 + bit);
			usleep(50);
			bit_index++;
		}
		byte_index++;
	}
	ft_putstr_fd("Signal sent to ", 1);
	ft_putstr_fd(av[1], 1);
	ft_putchar_fd('\n', 1);
}
