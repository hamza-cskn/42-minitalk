#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len) {
	char *dest;
	const char *source;

	dest = dst;
	source = src;

	if (!dest && !source)
		return (void *) (dest);

	while (len > 0) {
		dest[len] = source[len];
		len--;
	}

	return dst;
}
//tocheck
