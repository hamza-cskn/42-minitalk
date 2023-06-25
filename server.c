#include <unistd.h>
#include <signal.h>
#include "libft/libft.h"
#include <stdio.h>

static void right_shift_bit(char *c, int last_bit) {
    if (last_bit)
        *c = (*c >> 1) | 0b10000000;
    else
        *c = (*c >> 1) & 0b01111111;
}

void handler(int signum, siginfo_t *info, void *context) {
    (void) info;
    (void) context;
    static int bit_index = 0;
    static char c = '\0';

    right_shift_bit(&c, (signum - SIGUSR1));
    if (bit_index == 7) {
        ft_putchar_fd(c, 1);
        bit_index = 0;
    } else {
        bit_index++;
    }
}

int main() {
    ft_putstr_fd("Server PID: ", 1);
    ft_putnbr_fd(getpid(), 1);
    ft_putchar_fd('\n', 1);

    struct sigaction sa;
    sa.sa_flags = SA_RESTART | SA_SIGINFO;
    sa.sa_sigaction = handler;
    sigemptyset(&sa.sa_mask);

    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);

    while (1) pause();
}
