#include "libft.h"

void *ft_memchr(const void *memory, int c, size_t n) {
	const unsigned char *mem;
	size_t i;

	mem = memory;
	i = 0;
	while (mem[i] && i < n) {
		if (mem[i] == c)
			return (void *) (memory + i);
		i++;
	}
	if (c)
		return NULL;
	return (void *) (memory + i);
}