#include "libft.h"

void *memcpy(void *restrict destination, const void *restrict source, size_t n) {
	size_t i;
	unsigned char *dst;
	const unsigned char *src;

	dst = destination;
	src = source;

	if (!dst && !src)
		return (dst);

	i = 0;
	while (i < n) {
		dst[i] = src[i];
		i++;
	}

	return dst;
}
