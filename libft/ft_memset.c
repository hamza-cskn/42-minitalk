#include "libft.h"

void *ft_memset(void *memory, int c, size_t len) {
	size_t i;
	char *mem;

	mem = memory;
	i = 0;
	while (i < len) {
		mem[i] = (char) c;
		i++;
	}
	return (void *) mem;
}