#include "libft/libft.h"
#include <signal.h>

int get_bit(char c, int bit_index) {
    return c >> bit_index & 0b00000001;
}

int main(int ac, char **av) {
    (void) ac;
    int pid = ft_atoi(av[1]);
    int byte_index = 0;
    char *str = av[2];
    while (str[byte_index]) {
        int bit_index = 0;
        while (bit_index < 8) {
            int bit = get_bit(str[byte_index], bit_index);
            kill(pid, SIGUSR1 + bit);
            usleep(100);
            bit_index++;
        }
        byte_index++;
    }

    ft_putstr_fd("Signal sent to ", 1);
    ft_putstr_fd(av[1], 1);
    ft_putchar_fd('\n', 1);
}
