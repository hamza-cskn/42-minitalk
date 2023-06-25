#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size) {
	size_t cpy_len;
	size_t extra;

	cpy_len = 0;
	extra = 0;

	while (dst[cpy_len] && cpy_len < size)
		cpy_len++;

	while (src[extra] && (cpy_len + extra + 1) < size) {
		dst[cpy_len + extra] = src[extra];
		extra++;
	}

	if (cpy_len < size)
		dst[cpy_len + extra] = 0;

	return ((cpy_len + ft_strlen(src)) * sizeof(char));
}
