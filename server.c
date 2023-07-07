/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 12:14:12 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/07 12:38:30 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include "libft/libft.h"
#include <stdio.h>

void	right_shift_bit(char *c, int last_bit)
{
	if (last_bit)
		*c = (*c >> 1) | 0b10000000;
	else
		*c = (*c >> 1) & 0b01111111;
}

void	handler(int signum, siginfo_t *info, void *context)
{
	static int	bit_index = 0;
	static char	c = 0;

	(void) context;
	(void) info;
	right_shift_bit(&c, (signum - SIGUSR1));
	if (bit_index == 7)
	{
		ft_putchar_fd(c, 1);
		bit_index = 0;
	}
	else
		bit_index++;
}

int	main(void)
{
	struct sigaction	sa;

	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	sa.sa_flags = SA_RESTART;
	sa.sa_sigaction = handler;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
}
